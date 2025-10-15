#include <bits/stdc++.h>
using namespace std;

// student 
// male
// female
// boy
// girl

class Student{

public:
    void Student_print(){
        cout<<"I am student\n";
    }
};

class Male{

public:
    void Male_print(){
        cout<<"i am male\n";
    }
};

class Female{

public:
    void Female_print(){
        cout<<"i am female\n";
    }
};

class Boy:public Student,public Male
{

public:
    void Boy_print(){
        cout<<"i am boy\n";
    }
};


class Girl:public Student,public Female
{

public:
    void Girl_print(){
        cout<<"i am Girl\n";
    }
};
int main() {

    Girl g1;
    g1.Student_print();
    g1.Girl_print();

    Boy b1;
    b1.Student_print();
    b1.Boy_print();
    
    return 0;
}