#include <bits/stdc++.h>
using namespace std;

int main() {
    priority_queue<int> p;  // max heap

    p.push(10);
    p.push(20);
    p.push(11);
    p.push(18);
    p.push(15);

    cout<<p.top()<<endl;  // 20
    p.pop();
    cout<<p.top()<<endl;  // 18
    cout<<p.size()<<endl;
    cout<<p.empty()<<endl;

    // print
    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    cout<<endl;

    // min heap priorioty queue

    // syntax
    priority_queue<int,vector<int> , greater<int> > q;

    q.push(10);
    q.push(20);
    q.push(11);
    q.push(18);
    q.push(15);

    cout<<q.top()<<endl;  // 10
    q.pop();
    cout<<q.top()<<endl;  // 11
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

     // print
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }

    return 0;
}