#include <bits/stdc++.h>
using namespace std;

class Engineer{

protected:
    string department;

public:
    Engineer(){
        cout<<"inside engineer constructor\n";
    }

    void work(){
        cout<<"I am an Engineer and i work in "<<department<<endl;
    }
};

class Footballer{

protected:
    int goals;

public:
    Footballer(){
        cout<<"inside footballer constructor\n"<<endl;
    }

    void goals_scored(){
        cout<<"Goals scored : 10\n";
    }
};

// multiple inheritance
class Engineer_Footballer : public Engineer , public Footballer{

protected:
    int age;
public:
    Engineer_Footballer(string department , int goals,int age){
        cout<<"inside E+F const"<<endl;
        this->department = department;
        this->goals = goals;
        this->age = age;
    }

    void tellALL(){
        cout<<"i am enginner + footballer of age "<<age<<endl;
    }

};
int main() {
    Engineer_Footballer obj1("CSE",10,22);
    return 0;
}