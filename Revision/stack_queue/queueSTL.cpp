#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    // push
    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);

    // front
    cout<<q.front()<<endl;

    // size
    cout<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<q.front()<<" "<<q.size()<<endl;

    // empty
    cout<<q.empty()<<endl;

    // swap
    queue<int> q1;

    q1.push(10);

    q1.swap(q);

    cout<<q1.front()<<" "<<q.front()<<endl;
    return 0;
}