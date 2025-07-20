#include <bits/stdc++.h>
using namespace std;

class Customer{
    // make all variables private
    string name;
    int acc_no , balance;

    public:
    Customer(string name , int acc_no , int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
    }

    void deposit(int amt){
        if(amt > 0) balance += amt;
        else cout<<"invalid amt"<<endl;
    }

    void withdraw(int amt){
        if(amt > 0 && amt <= balance) balance -= amt;
        else if(amt < 0) cout<<"invalid amt"<<endl;
        else cout<<"insufficient balance"<<endl;
    }

    void display(){
        cout<<name<<" "<<acc_no<<" "<<balance<<endl;
    }
};
int main() {
    Customer c1("rohit" , 123 , 1200);
    c1.display();

    c1.deposit(-100);
    c1.withdraw(-10);
    return 0;
}