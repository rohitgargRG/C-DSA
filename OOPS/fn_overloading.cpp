#include <bits/stdc++.h>
using namespace std;

class Area{
    public:

    int calc_area(int r){ // area of circle
        return 3.14*r*r;
    }

    int calc_area(int l,int b){ // area of rectangle
        return l*b;
    }

    // error
    // double calc_area(int r){
    //     return 3.14*r*r;
    // }
};
int main() {
    Area obj1;
    cout<<obj1.calc_area(5)<<endl;
    cout<<obj1.calc_area(4,5)<<endl;
    return 0;
}