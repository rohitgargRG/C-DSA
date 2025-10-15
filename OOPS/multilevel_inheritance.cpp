#include <bits/stdc++.h>
using namespace std;

class Person{
    
protected:
    string name;
    int age;

public:
    
    Person(string name , int age){
        this->name = name;
        this->age = age;
    }

    void introduce(){
        cout<<"Hello i am "<<name<<endl;
    }
};

// derived class
class Employee: public Person{

protected:
    float salary;

public:
    Employee(string name , int age , float salary):Person(name,age)
    {   
        this->salary = salary;
    }

    void monthly_salary(){
        cout<<"my monthly salary is "<<salary<<endl;
    }
};

// derived class from employee class
class Manager: public Employee{

protected:
    string department;

public:
    Manager(string name , int age , float salary , string department):Employee(name,age,salary)
    {
        this->department = department;
    }

    void tell_dept(){
        cout<<"my department is "<<department<<endl;
    }
};

int main() {
    Manager m1("Rohit" , 22 , 5000000.777,"Devops");
    m1.introduce();
    m1.monthly_salary();
    m1.tell_dept();
    
    return 0;
}