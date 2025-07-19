#include <bits/stdc++.h>
using namespace std;

// create a class
class Student{
    public:
    string name,grade;
    int roll , age;
};

int main() {

    // create an object
    Student s1;
    s1.name = "Rohit";
    s1.grade = "A+";
    s1.roll = 47;
    s1.age = 22;

    cout<<s1.name<<" "<<s1.grade<<" "<<s1.roll<<" "<<s1.age<<endl;

    // create another object
    Student s2;
    s2.name = "Sanchit";
    s2.grade = "A-";
    s2.roll = 50;
    s2.age = 21;

    cout<<s2.name<<" "<<s2.grade<<" "<<s2.roll<<" "<<s2.age<<endl;

    return 0;
}