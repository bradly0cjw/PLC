(* Define the types *)
datatype Gender = M | F
datatype Relationship = Parent | Siblings | Brother | Sister | Cousin

(* Define the person *)
type person = string * Gender * string * string * string

(* Define the relationships *)
fun parent ((_, _, par1, _, _), (_, _, par2, _, _)) = par1 = par2
fun siblings ((_, _, _, sib1, _), (_, _, _, sib2, _)) = sib1 = sib2
fun brother ((name1, M, _, _, _), (name2, M, _, _, _)) = siblings((name1, M, "", "", ""), (name2, M, "", "", ""))
fun sister ((name1, F, _, _, _), (name2, F, _, _, _)) = siblings((name1, F, "", "", ""), (name2, F, "", "", ""))
fun cousin ((_, _, _, _, cousin1), (_, _, _, _, cousin2)) = cousin1 = cousin2

(* Query the relationship *)
fun query_relationship (Person1, Person2, Relationship) =
        case Relationship of
                Parent => parent(Person1, Person2)
            | Siblings => siblings(Person1, Person2)
            | Brother => brother(Person1, Person2)
            | Sister => sister(Person1, Person2)
            | Cousin => cousin(Person1, Person2)

(* List of persons *)
val persons = ref []

(* Add a person *)
fun add_person (p : person) = persons := p :: !persons

val _ = add_person(("Andy", M, "","Bob",""))
val _ = add_person(("Bob", M, "Andy","Cecil","Helen"))
val _ = add_person(("Cecil", M, "Bob","Dennis",""))
val _ = add_person(("Dennis", M, "Cecil","Edward","Pattie"))
val _ = add_person(("Edward", M, "Dennis","Felix",""))
val _ = add_person(("Felix", M, "Edward","",""))
val _ = add_person(("Martin", M, "","Nancy","Gigi"))
val _ = add_person(("Oscar", M, "Nancy","Pattie",""))
val _ = add_person(("Quinn", M, "Pattie","Rebecca",""))
val _ = add_person(("Gigi", F, "","Helen","Martin"))
val _ = add_person(("Helen", F, "Gigi","Iris","Bob"))
val _ = add_person(("Iris", F, "Helen","Jane",""))
val _ = add_person(("Jane", F, "Iris","Kate",""))
val _ = add_person(("Kate", F, "Jane","Liz",""))
val _ = add_person(("Liz", F, "Kate","",""))
val _ = add_person(("Nancy", F, "Martin","Oscar",""))
val _ = add_person(("Pattie", F, "Oscar","Quinn","Dennis"))
val _ = add_person(("Rebecca", F, "Quinn","",""))

(* Test cases *)
val _ = print (Bool.toString (query_relationship(("Bob", M, "","Cecil","Helen"), ("Cecil", M, "Bob","Dennis",""), Parent)) ^ "\n")
val _ = print (Bool.toString (query_relationship(("Helen", F, "Gigi","Iris","Bob"), ("Cecil", M, "Bob","Dennis",""), Parent)) ^ "\n")
val _ = print (Bool.toString (query_relationship(("Helen", F, "Gigi","Iris","Bob"), ("Nancy", F, "Martin","Oscar",""), Sister)) ^ "\n")
val _ = print (Bool.toString (query_relationship(("Edward", M, "Dennis","Felix",""), ("Quinn", M, "Pattie","Rebecca",""), Brother)) ^ "\n")
val _ = print (Bool.toString (query_relationship(("Felix", M, "Edward","",""), ("Rebecca", F, "Quinn","",""), Cousin)) ^ "\n")
val _ = print (Bool.toString (query_relationship(("Cecil", M, "Bob","Dennis",""), ("Iris", F, "Helen","Jane",""), Siblings)) ^ "\n")