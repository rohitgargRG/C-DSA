#include <bits/stdc++.h>
using namespace std;

class Car{
    
public:
    string name;
    int price;
    int seats;
    string type;
};

int main() {

    // creating objects
    Car c1;

    c1.name = "Toyota";
    c1.price = 1500000;
    c1.seats = 5;
    c1.type = "sedan";

    Car c2;

    c2.name = "jaguar";
    c2.price = 2500000;
    c2.seats = 4;
    c1.type = "Hatchback";

    Car c3;

    c3.name = "bugatti";
    c3.price = 23;
    return 0;
}