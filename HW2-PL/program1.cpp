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

string findresult(const string &p1, const string &p2, const string &r, vector<person> &people) {
    for (int i = 0; i < people.size(); i++) {
        if (people[i].name == p1) {
            for (int j = 0; j < people.size(); j++) {
                if (people[j].name == p2) {
                    if (people[i].parent == &people[j] || people[j].parent == &people[i]) {
                        if (r == "parent") {
                            return "yes";
                        }
                    }
//                    if (people[i].child == &people[j] || people[j].child == &people[i]) {
//                        if (r == "child") {
//                            return "yes";
//                        }
//                    }
//                    if (people[i].spouse == &people[j] || people[j].spouse == &people[i]) {
//                        return "spouse";
//                    }
                    if (people[i].sibling == &people[j] && people[i].sex == people[j].sex && people[i].sex == "male") {
                        if (r == "brothers") {
                            return "yes";
                        }
                    }
                    if (people[i].sibling == &people[j] && people[i].sex == people[j].sex &&
                        people[i].sex == "female") {
                        if (r == "sisters") {
                            return "yes";
                        }
                    }
                    if (people[i].sibling == &people[j]) {
                        if(r == "sibling"){
                            return "yes";
                        }
                    }
                    if (people[i].parent->sibling == people[j].parent &&
                        people[i].parent->sibling != nullptr) {
                        if(r == "cousins"){
                            return "yes";
                        }
                    }
                    return "no";
                }
            }
        }
        return "Not found";

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
        string p1, p2, relation;
        cin >> p1 >> p2 >> relation;
        cout << findresult(p1, p2, relation, people);
    }