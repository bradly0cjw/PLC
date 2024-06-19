//
// Created by LINBEI on 6/20/2024.
//
#include "bits/stdc++.h"
//#define in cin;
using namespace std;

struct person {
    string name;
    string sex;
    person *parent;
    person *child;
    person *spouse;
    person *sibling;

    person() {
        name = "";
        sex = "";
        parent = nullptr;
        child = nullptr;
        spouse = nullptr;
        sibling = nullptr;
    }
};

string findresult(const string &p1, const string &p2, vector<person> people) {
    for (auto &i: people) {
        if (i.name == p1) {
            for (auto &j: people) {
                if (j.name == p2) {
                    if (i.parent == &j || j.parent == &i) {
                        return "parent";
                    }
                    if (i.child == &j || j.child == &i) {
                        return "child";
                    }
                    if (i.spouse == &j || j.spouse == &i) {
                        return "spouse";
                    }
                    if (i.sibling == &j && i.sex == j.sex && i.sex == "male") {
                        return "brothers";
                    }
                    if (i.sibling == &j && i.sex == j.sex && i.sex == "female") {
                        return "sisters";
                    }
                    if (i.parent->sibling == j.parent->sibling &&
                        i.parent->sibling != nullptr) {
                        return "cousins";
                    }
                    return "unrelated";
                }
            }
        }
    }

}

int main() {
    ifstream in("HW2-PL/HW1-input.in");
    vector<person> people;
    int n;
    in >> n;
    for (int i = 0; i < n; i++) {
        person p;
        string temp;
        in >> temp;
        p.name = temp;
        p.sex = "male";
        people.push_back(p);
    }
    in >> n;
    for (int i = 0; i < n; i++) {
        person p;
        string temp;
        in >> temp;
        p.name = temp;
        p.sex = "female";
        people.push_back(p);
    }
    in >> n;
    for (int x = 0; x < n; x++) {
        string person_temp1, person_temp2;
        in >> person_temp1 >> person_temp2;
        for (auto &i: people) {
            if (i.name == person_temp1) {
                for (auto &j: people) {
                    if (j.name == person_temp2) {
                        i.spouse = &j;
                        j.spouse = &i;
                    }
                }
            }
        }
    }
    in >> n;
    for (int x = 0; x < n; x++) {
        string person_temp1, person_temp2;
        in >> person_temp1 >> person_temp2;
        for (auto &i: people) {
            if (i.name == person_temp1) {
                for (auto &j: people) {
                    if (j.name == person_temp2) {
                        i.child = &j;
                        j.parent = &i;
                    }
                }
            }
        }
    }

    for (auto &i: people) {
        if (i.spouse != nullptr) {
            i.child->sibling = i.spouse->child;
        }
    }
    string p1, p2;
    cin >> p1 >> p2;
    cout << findresult(p1, p2, people);
}