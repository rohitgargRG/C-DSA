#include <bits/stdc++.h>
using namespace std;

// student is a new datatype
class Student{

    // attributes of this class
public:
    string name;
    int roll;
    float cgpa;

};



int main() {
    Student s1;

    // initialize
    s1.name = "Rohit";
    // s1.roll = 72;
    s1.cgpa = 9.0;

    // taking input
    cin>>s1.roll;

    Student s2;

    s2.name = "cristiano";
    s2.roll = 47;
    s2.cgpa = 4.5;

    //error
    // cout<<s1<<endl;

    cout<<s1.name<<endl;
    cout<<s2.name<<endl;

    return 0;
}