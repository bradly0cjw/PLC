(* Define a record type for a person *)
type person = {name: string, gender: string, parent: string,child: string, spouse: string }

(* Define a list to store your facts *)
val people = ref ([] : person list)

(* Function to add a person to the list *)
fun add_person p = people := p :: !people

(* Define the relationships *)
(* Define the parent relationship *)

val _ = add_person{name="Andy", gender="M", parent="",child="Bob",spouse=""}
val _ = add_person{name="Bob", gender="M", parent="Andy",child="Cecil",spouse="Helen"}
val _ = add_person{name="Cecil", gender="M", parent="Bob",child="Dennis",spouse=""}
val _ = add_person{name="Dennis", gender="M", parent="Cecil",child="Edward",spouse="Pattie"}
val _ = add_person{name="Edward", gender="M", parent="Dennis",child="Felix",spouse=""}
val _ = add_person{name="Felix", gender="M", parent="Edward",child="",spouse=""}
val _ = add_person{name="Martin", gender="M", parent="",child="Nancy",spouse="Gigi"}
val _ = add_person{name="Oscar", gender="M", parent="Nancy",child="Pattie",spouse=""}
val _ = add_person{name="Quinn", gender="M", parent="Pattie",child="Rebecca",spouse=""}
val _ = add_person{name="Gigi", gender="F", parent="",child="Helen",spouse="Martin"}
val _ = add_person{name="Helen", gender="F", parent="Gigi",child="Iris",spouse="Bob"}
val _ = add_person{name="Iris", gender="F", parent="Helen",child="Jane",spouse=""}
val _ = add_person{name="Jane", gender="F", parent="Iris",child="Kate",spouse=""}
val _ = add_person{name="Kate", gender="F", parent="Jane",child="Liz",spouse=""}
val _ = add_person{name="Liz", gender="F", parent="Kate",child="",spouse=""}
val _ = add_person{name="Nancy", gender="F", parent="Martin",child="Oscar",spouse=""}
val _ = add_person{name="Pattie", gender="F", parent="Oscar",child="Quinn",spouse="Dennis"}
val _ = add_person{name="Rebecca", gender="F", parent="Quinn",child="",spouse=""}

fun married p1 p2 = 
    List.exists (fn p => #name p = p1 andalso #spouse p = p2) (!people)

fun parent p1 p2 = 
    let 
        val parents = List.filter (fn p => #child p = p2) (!people)
    in
        if null parents then
            false
        else
            List.exists (fn p => #name p = p1 andalso (#child p = p2)) (!people) orelse
            married (#name (List.hd parents)) p1
    end

fun siblings p1 p2 = 
    let
        val parents_of_p1 = List.filter (fn p => #child p = p1 orelse (#spouse p <> "" andalso #child p = #spouse p)) (!people)
        val parents_of_p2 = List.filter (fn p => #child p = p2 orelse (#spouse p <> "" andalso #child p = #spouse p)) (!people)
    in
        (* List.app (fn p => print (#name p ^ "\n")) parents_of_p1; *)
        (* List.app (fn p => print (#name p ^ "\n")) parents_of_p2; *)
        married (#name (List.hd parents_of_p1)) (#name (List.hd parents_of_p2))
    end

fun brother p1 p2 = 
    siblings p1 p2 andalso
    List.exists (fn p => #name p = p1 andalso #gender p = "M") (!people) andalso
    List.exists (fn p => #name p = p2 andalso #gender p = "M") (!people)

fun sister p1 p2 = 
    siblings p1 p2 andalso
    List.exists (fn p => #name p = p1 andalso #gender p = "F") (!people) andalso
    List.exists (fn p => #name p = p2 andalso #gender p = "F") (!people)

fun find_p1_parent_spouse p1 = 
    let
        val parents_of_p1 = List.filter (fn p => #child p = p1) (!people)
    in
        if List.null parents_of_p1 then
            [] (* or handle it as per your requirement *)
        else
            List.filter (fn p => #name p = #spouse (List.hd parents_of_p1)) (!people)
    end

fun cousin p1 p2 = 
    let
        val parents_of_p1 = List.filter (fn p => #child p = p1) (!people)
        val parents_of_p2 = List.filter (fn p => #child p = p2) (!people)
        val parents_of_p1_spouse = find_p1_parent_spouse p1
        val parents_of_p2_spouse = find_p1_parent_spouse p2
    in
        List.exists (fn p1 => List.exists (fn p2 => siblings (#name p1) (#name p2)) parents_of_p2) parents_of_p1 orelse
        List.exists (fn p1 => List.exists (fn p2 => siblings (#name p1) (#name p2)) parents_of_p2) parents_of_p1_spouse orelse
        List.exists (fn p1 => List.exists (fn p2 => siblings (#name p1) (#name p2)) parents_of_p1) parents_of_p2_spouse
    end

(* Query the relationship *)
fun query_relationship (p1, p2, relationship) =
    case relationship of
        "Parent" => parent p1 p2
      | "Siblings" => siblings p1 p2
      | "Brother" => brother p1 p2
      | "Sister" => sister p1 p2
      | "Cousin" => cousin p1 p2
      | _ => false

(* Test cases *)
val _ = print (Bool.toString (query_relationship("Bob", "Cecil", "Parent")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Helen", "Cecil", "Parent")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Helen", "Nancy", "Sister")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Edward", "Quinn", "Brother")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Felix", "Rebecca", "Cousin")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Cecil", "Iris", "Siblings")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Nancy", "Martin", "Parent")) ^ "\n")
val _ = print (Bool.toString (query_relationship("Cecil", "Oscar", "Cousin")) ^ "\n")
