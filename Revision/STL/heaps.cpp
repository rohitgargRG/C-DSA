#include <bits/stdc++.h>
using namespace std;

int main() {
    // max heap
    priority_queue<int> q;

    q.push(20);
    q.push(2);
    q.push(5);
    q.push(50);

    cout<<q.top()<<endl; // 50
    cout<<q.size()<<endl; // 4
    cout<<q.empty()<<endl; //0
    
    while(!q.empty()){
        cout<<q.top()<<" ";
        q.pop();
    }
    cout<<endl;

    // min heap
    priority_queue<int,vector<int> , greater<int>> pq;

    pq.push(100);
    pq.push(10);
    pq.push(5);
    pq.push(20);

    cout<<pq.top()<<endl;
    cout<<pq.size()<<endl;
    cout<<pq.empty()<<endl;

    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}