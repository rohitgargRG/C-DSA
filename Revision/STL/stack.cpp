#include <bits/stdc++.h>
using namespace std;

int main() {
    // basic operation
    stack<int> s;

    // push and pop
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    s.pop();
    s.pop();

    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;


    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    stack<int> s1,s2;
    s1.swap(s2);

    // initialize a stack
    vector<int> v = {10,20,30,40};

    stack<int , vector<int>> s3(v);

    while(!s3.empty()){
        cout<<s3.top()<<" ";
        s3.pop();
    }

    return 0;
}