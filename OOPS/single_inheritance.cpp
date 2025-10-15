#include <bits/stdc++.h>
using namespace std;

// single inheritance
class Human{

    protected:
    string name;
    int age;

    public:
    Human(string name , int age){
        this->name = name;
        this->age = age;
    }

    void display(){
        cout<<"inside human class"<<endl;
    }
};

// derived class
class Student: protected Human{
    int roll_no , fees;

    public:
    // calling parent class constructor from child class
    Student(string name , int age , int roll_no , int fees):Human(name,age)
    {
        this->roll_no = roll_no;
        this->fees = fees;
    }

    void display(){
        cout<<"inside Student"<<endl;
    }
};


int main() {
    Student s1("rohit" , 22 , 47 , 20869);
    s1.display(); // this will call display() function of student class
    // if no display() fn in student class , then it will call student fn of Human class. 
    return 0;
}