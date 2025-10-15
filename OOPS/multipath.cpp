#include <bits/stdc++.h>
using namespace std;

class Human{

protected:
    string name; int age;
public:
    void display(){
        cout<<name<<" "<<age<<endl;
    }
};

class Footballer : public virtual Human{  // make it virtual to remove ambiguous error

protected:
    int goals;
public:
    void printGoals(){
        cout<<"no fo goals : "<<goals<<endl;
    }
};

class Engineer : public virtual Human{  // make it virtual to remove ambiguous error

protected:
    int salary;
public:
    void print_salary(){
        cout<<"salary is : "<<salary<<endl;
    }
};

class Footballer_Engineer : public Footballer,public Engineer{

protected:
    int YOB;
public:
    Footballer_Engineer(string name , int age , int goals , int salary , int yob){
        this->name = name;
        this->age = age;
        this-> goals = goals;
        this->salary = salary;
        this->YOB = yob;
    }
};
int main() {
    return 0;
}