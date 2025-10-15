#include <bits/stdc++.h>
using namespace std;

class Animal{

    public:

    // virtual void speak(){
    //     cout<<"HU HU\n";
    // }

    // pure virtual function
    virtual void speak() = 0;
};

// child class 1
class Dog : public Animal{

    public:

    // also known as fn overriding.
    void speak(){
        cout<<"Bark\n";
    }

    void anms(){
        cout<<"randm fn\n";
    }
};

int main() {
    Animal *p;
    p = new Dog();
    p->speak();
    // p->anms(); // error
    return 0;
}