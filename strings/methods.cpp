#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1;
    getline(cin,s1);
    cout<<s1<<endl;

    // size of string
    cout<<s1.size()<<endl;

    // append two strings
    string s2;
    getline(cin,s2);
    cout<<s2<<endl;

    string s3 = s1+" "+s2;
    cout<<"appended : "<<s3<<endl;

    // add a character at the end of string
    s3.push_back('R');
    cout<<s3<<endl;

    // remove a character form the end of string
    s3.pop_back();
    cout<<s3<<endl;

    // print a string having "" in it.
    // use \ -> escape character.
    string s4 = "hello , \"rohit\"";
    cout<<s4<<endl;

    // what if we want to print \ -> escape character.
    string s5 = "rohit \\ garg";
    cout<<s5<<endl;

    // print null character
    string s6 = "\\0";
    cout<<s6<<endl;



    return 0;
}