#include <bits/stdc++.h>
using namespace std;

// create a class
class Student{
    public:  // by default private
    string name,grade;
    int roll , age;

   
};

class Stud{
    private:
    string name,grade;
    int roll,age;

    // getter and setter functions -> used to access/modify private variables

    public:
    // setter()
    void set_name(string str){
        name = str;
    }

    void set_grade(string str){
        grade = str;
    }

    void set_roll(int n){
        roll = n;
    }

    void set_age(int x){
        age = x;
    }

    // getters()
    string get_name(){
        return name;
    }

    string get_grade(){
        return grade;
    }

    int get_roll(){
        return roll;
    }

    int get_age(){
        return age;
    }
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

    Stud s3;

    // setters()
    s3.set_name("RG");
    s3.set_grade("A+");
    s3.set_roll(47);
    s3.set_age(22);

    // getters()
    cout<<s3.get_name()<<endl;
    cout<<s3.get_grade()<<endl;
    cout<<s3.get_roll()<<endl;
    cout<<s3.get_age()<<endl;

    return 0;
}