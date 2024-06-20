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

fun parent p1 p2 = 
    List.exists (fn p => #name p = p1 andalso (#child p = p2 orelse #parent p = p2)) (!people)

fun siblings p1 p2 = 
    let
        val parents_of_p1 = List.filter (fn p => #child p = p1) (!people)
        val parents_of_p2 = List.filter (fn p => #child p = p2) (!people)
    in
        List.exists (fn p1 => List.exists (fn p2 => #name p1 = #name p2) parents_of_p2) parents_of_p1 andalso p1 <> p2
    end

fun brother p1 p2 = 
    List.exists (fn p => #name p = p1 andalso #gender p = "M" andalso #child p = p2) (!people)

fun sister p1 p2 = 
    List.exists (fn p => #name p = p1 andalso #gender p = "F" andalso #child p = p2) (!people)

fun cousin p1 p2 = 
    List.exists (fn p => #name p = p1 andalso #child p = p2) (!people)

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