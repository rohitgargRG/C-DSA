#include <bits/stdc++.h>
using namespace std;

int main() {
    //  create and initialize a pair

    pair<int,int> p1(0,1);

    cout<<p1.first<< " "<<p1.second<<endl;

    // 1
    p1.first = 100;
    p1.second = 200;

    cout<<p1.first<< " "<<p1.second<<endl;

    // 2
    p1 = make_pair(300,400);

    cout<<p1.first<< " "<<p1.second<<endl;

    // 3
    p1 = {500,600};

    cout<<p1.first<< " "<<p1.second<<endl;

    // default values
    cout<<"default : "<<endl;

    pair<int,int> p2;
    pair<char,float> p3;
    pair<string , double> p4;

    cout<<p2.first<< " "<<p2.second<<endl;
    cout<<p3.first<< " "<<p3.second<<endl;
    cout<<p4.first<< " "<<p4.second<<endl;

    // for int,float,double -> default value = 0
    // for rest default value is NULL , prints nothing.

    // functions

    // swap

    pair<int,int> p5(10,20);
    pair<int,int> p6(30,40);

    cout<<p5.first<<" "<<p5.second<<endl;
    cout<<p6.first<<" "<<p6.second<<endl;

    p5.swap(p6);

    cout<<p5.first<<" "<<p5.second<<endl;
    cout<<p6.first<<" "<<p6.second<<endl;

    // other datatypes
    pair<char,string> p7('R',"rohit");
    cout<<p7.first<<" "<<p7.second<<endl;

    // tie() - copies values of pair into 2 variables.
    int a,b;

    tie(a,b) = p6;

    cout<<a<<" "<<b<<endl;

    tie(a,ignore) = p6;

    cout<<a<<" "<<b<<endl;

    // nesting of pairs
    pair<int,pair<int,int>> p8 = {1000, {-1,-2}};

    cout<<p8.first<<" : "<<p8.second.first<<p8.second.second<<endl;

    // get()
    pair<int,int> p9(90,80);
    cout<<get<0>(p9)<<" "<<get<1>(p9)<<endl;

    return 0;
}
