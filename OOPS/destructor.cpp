#include <bits/stdc++.h>
using namespace std;

class Customer{
    public:
    string name;
    int *data;

    Customer(string name){
        data = new int;
        *data = 100;

        this->name = name;
        cout<<"const called for : "<<name<<endl;
    }

    ~Customer(){
        // delete data;
        cout<<"dest called for : "<<name<<endl;
    }
};

int main() {

    Customer A1("1"),A2("2"),A3("3");
    return 0;
}