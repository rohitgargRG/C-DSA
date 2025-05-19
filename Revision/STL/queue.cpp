#include <bits/stdc++.h>
using namespace std;

int main() {
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.size()<<endl;
    cout<<q.empty()<<endl;

    cout<<q.back()<<endl;

    queue<int> q1,q2;

    q1 = q;

    q1.swap(q2);

    return 0;
}