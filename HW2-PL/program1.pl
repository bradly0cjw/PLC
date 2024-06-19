% Define a person
% person(Name, Sex, Parent, Child, Spouse).
person('Andy', 'M', '','Bob','').
person('Bob', 'M', 'Andy','Cecil','Helen').
person('Cecil', 'M', 'Bob','Dennis','').
person('Dennis', 'M', 'Cecil','Edward','Pattie').
person('Edward', 'M', 'Dennis','Felix','').
person('Felix', 'M', 'Edward','','').
person('Martin', 'M', '','Nancy','Gigi').
person('Oscar', 'M', 'Nancy','Pattie','').
person('Quinn', 'M', 'Pattie','Rebecca','').
person('Gigi', 'F', '','Helen','Martin').
person('Helen', 'F', 'Gigi','Iris','Bob').
person('Iris', 'F', 'Helen','Jane','').
person('Jane', 'F', 'Iris','Kate','').
person('Kate', 'F', 'Jane','Liz','').
person('Liz', 'F', 'Kate','','').
person('Nancy', 'F', 'Martin','Oscar','').
person('Pattie', 'F', 'Oscar','Quinn','Dennis').
person('Rebrcca', 'F', 'Quinn','','').


% Relation #1: If X and Y are married, and X is Z’s parent, then Y is also Z’s parent.
parent(Parent, Child) :- person(Parent, _, _, Child, _); person(_, _, _, Child, Parent).

% Relation #2: If X is Y’s parent, and X is Z’s parent, then Y and Z are siblings.
siblings(Person1, Person2) :-
    parent(Parent, Person1),
    parent(Parent, Person2),
    Person1 \= Person2.

% Relation #3: If X and Y are siblings, X is male, and Y is male, then X and Y are brothers.
brother(Person1, Person2) :-
    siblings(Person1, Person2),
    person(Person1, 'M', _, _, _),
    person(Person2, 'M', _, _, _).

% Relation #4: If X and Y are siblings, X is female, and Y is female, then X and Y are sisters.
sister(Person1, Person2) :-
    siblings(Person1, Person2),
    person(Person1, 'F', _, _, _),
    person(Person2, 'F', _, _, _).

% Relation #5: If W and X are siblings, W is Y’s parent, and X is Z’s parent, then Y and Z are cousins.
cousin(Person1, Person2) :-
    parent(Parent1, Person1),
    parent(Parent2, Person2),
    siblings(Parent1, Parent2).

% Query the relationship
query_relationship(Person1, Person2, Relationship) :-
    (parent(Person1, Person2), Relationship = parent -> true;
    siblings(Person1, Person2), Relationship = siblings -> true;
    brother(Person1, Person2), Relationship = brother -> true;
    sister(Person1, Person2), Relationship = sister -> true;
    cousin(Person1, Person2), Relationship = cousin -> true;
    false).

% Test cases
query_relationship('Bob', 'Cecil','parent').
query_relationship('Helen', 'Cecil','parent').
query_relationship('Helen', 'Nancy','sister').
query_relationship('Edward', 'Quinn','brother').
query_relationship('Felix', 'Rebecca','cousin').
query_relationship('Cecil', 'Iris','siblings').