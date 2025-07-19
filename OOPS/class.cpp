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
    // we can also perform security/data protection checks using setters and getters
    void set_name(string str){
        if(str.size() == 0){
            cout<<"please enter valid name"<<endl;
            return;
        }
        name = str;
    }

    void set_grade(string str){
        grade = str;
    }

    void set_roll(int n){
        roll = n;
    }

    void set_age(int x){
        if(x < 0 || x > 100){
            cout<<"please enter valid age"<<endl;
            return;
        }

        age = x;
    }

    // getters()
    string get_name(){
        return name;
    }

    string get_grade(int pin){
        if(pin == 123)
        return grade;

        return "invalid pin";
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
    cout<<s3.get_grade(231)<<endl;
    cout<<s3.get_roll()<<endl;
    cout<<s3.get_age()<<endl;

    // dynamic memory allocation into heap
    Student *S = new Student;

    (*S).name = "cr7";
    (*S).age = 40;
    (*S).roll = 100;
    S->grade = "A";

    cout<<S->name<<" "<<S->age<<" "<<S->roll<<" "<<S->grade<<endl;

    return 0;
}