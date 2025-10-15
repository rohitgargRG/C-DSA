#include <bits/stdc++.h>
using namespace std;

// parent class
class Human{
// private:
protected:
    string name;
    int age , weight;

};

// child class/inherited class
class Student: public Human{
    int roll_no;
    string grade;

public:
    
    Student(string name , int age ,int weight , int roll_no , string grade){
        this->name = name;
        this->age = age;
        this->weight = weight;
        this->roll_no = roll_no;
        this->grade = grade;
    }

    void display(){
        cout<<name<<" "<<age<<" "<<weight<<" "<<roll_no<<" "<<grade<<endl;
    }
};

class Teacher: protected Human{
    int salary,id;
};


int main() {
    Student obj1("rohit" , 22 , 70 , 47 , "A+");
    obj1.display();
    return 0;
}