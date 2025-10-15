#include <bits/stdc++.h>
using namespace std;

class Customer{

    static int total_customer;
    static long long total_balance;

    public:
    string name;
    int acc_no,balance;
    
    Customer(string name , int acc_no , int balance){
        this->name = name;
        this->acc_no = acc_no;
        this->balance = balance;
        total_customer++;
        total_balance += balance;        
    }

    // static member function
    static void accessStatic(){
        cout<<"total customers : "<<total_customer<<endl;
        cout<<"total balance : "<<total_balance<<endl;
    }

    void deposit(int amt){
        if(amt > 0){
            balance += amt;
            total_balance += amt;
        }
    }

    void withdraw(int amt){
        if(amt <= balance && amt > 0){
            balance -= amt;
            total_balance -= amt;
        }
        else{
            cout<<"insufficient balance\n";
            return;
        }   
    }

    void display(){
        cout<<total_customer<<endl;
    }
};

// initialise static member
int Customer::total_customer = 0;
long long Customer::total_balance = 0;

int main() {
    Customer c1("Rohit" , 1 , 1000);
    // c1.display();
    Customer c2("RG" , 2 , 2000);
    // c2.display();
    // c1.display();

    // directly access static data member -> only if it is public
    // cout<<Customer::total_customer<<endl;
    Customer::accessStatic();

    c1.deposit(3000);

    Customer::accessStatic();

    c2.withdraw(500);

    Customer::accessStatic();

    return 0;
}