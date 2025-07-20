#include <bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name;
    int acc_no , balance;

    // default cosntructor
    Customer(){
        cout<<"default const called\n";
        name = "Rohit";
        acc_no = 123;
        balance = 2000;
    }

    // parameterised constructor
    // Customer(string a , int b , int c){
    //     name = a;
    //     acc_no = b;
    //     balance = c;
    // }

    // Customer(string name , int acc_no , int balance){
    //     this->name = name;
    //     this->acc_no = acc_no;
    //     this->balance = balance;
    // }

    // Construtor Overloading
    Customer(string name , int balance){
        this->name = name;
        this->balance = balance;
    }

    // inline constructor
    inline Customer(string a , int b , int c): name(a),acc_no(b),balance(c){

    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }

    // copy constructor
    Customer(Customer &B){  // pass by reference always
        name = B.name;
        acc_no = B.acc_no;
        balance = B.balance;
    }


};
int main() {
    Customer c1;
    c1.display();

    Customer c2("rg",234,1000);
    c2.display();

    Customer c3("rohit" , 777 , 77000);
    c3.display();

    Customer c4("cr7" , 3545);
    c4.display();

    // copy constructor
    Customer c5(c3);
    c5.display();

    return 0;
}