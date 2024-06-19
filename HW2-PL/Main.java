import java.util.*;
import java.io.*;

class Person {
    String name;
    String sex;
    Person parent;
    Person child;
    Person spouse;
    Person sibling;

    Person() {
        this.name = "";
        this.sex = "";
        this.parent = null;
        this.child = null;
        this.spouse = null;
        this.sibling = null;
    }
}

public class Main {
    public static String findResult(String p1, String p2, String r, ArrayList<Person> people) {
        for (Person i : people) {
            if (i.name.equals(p1)) {
                for (Person j : people) {
                    if (j.name.equals(p2)) {
                        if (i.parent == j || j.parent == i) {
                            if(r.equals("parent")) {
                                return "true";
                            }
                        }
                        // if (i.child == j || j.child == i) {
                        //     return "child";
                        // }
                        // if (i.spouse == j || j.spouse == i) {
                        //     return "spouse";
                        // }
                        if (i.sibling == j && i.sex.equals(j.sex) && i.sex.equals("male")) {
                            if(r.equals("brothers")) {
                                return "true";
                            }
                        }
                        if (i.sibling == j && i.sex.equals(j.sex) && i.sex.equals("female")) {
                            if(r.equals("sisters")) {
                                return "true";
                            }
                        }
                        if (i.sibling == j) {
                            if(r.equals("siblings")) {
                                return "true";
                            }
                        }
                        if (i.parent != null && j.parent != null && i.parent.sibling == j.parent) {
                            if(r.equals("cousins")) {
                                return "true";
                            }
                        }
                        return "false";
                    }
                }
            }
        }
        return null;
    }

    public static void main(String[] args) throws FileNotFoundException {
        File file = new File("HW1-input.in");
        try (Scanner in = new Scanner(file)) {
            ArrayList<Person> people = new ArrayList<>();
            int n = in.nextInt();
            for (int i = 0; i < n; i++) {
                Person p = new Person();
                p.name = in.next();
                p.sex = "male";
                people.add(p);
            }
            n = in.nextInt();
            for (int i = 0; i < n; i++) {
                Person p = new Person();
                p.name = in.next();
                p.sex = "female";
                people.add(p);
            }
            n = in.nextInt();
            for (int x = 0; x < n; x++) {
                String personTemp1 = in.next();
                String personTemp2 = in.next();
                for (Person i : people) {
                    if (i.name.equals(personTemp1)) {
                        for (Person j : people) {
                            if (j.name.equals(personTemp2)) {
                                i.spouse = j;
                                j.spouse = i;
                            }
                        }
                    }
                }
            }
            n = in.nextInt();
            for (int x = 0; x < n; x++) {
                String personTemp1 = in.next();
                String personTemp2 = in.next();
                for (Person i : people) {
                    if (i.name.equals(personTemp1)) {
                        for (Person j : people) {
                            if (j.name.equals(personTemp2)) {
                                i.child = j;
                                j.parent = i;
                            }
                        }
                    }
                }
            }

            for (Person i : people) {
                if (i.spouse != null && i.child != null && i.spouse.child != null) {
                    i.child.sibling = i.spouse.child;
                }
            }
            Console console = System.console();
            String line = console.readLine();
            String[] parts = line.split(" ");
            String p1 = parts[0];
            String p2 = parts[1];
            String result = parts[2];
            System.out.println(findResult(p1, p2, result, people));
        }
    }
}