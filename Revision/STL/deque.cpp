#include <bits/stdc++.h>
using namespace std;

int main() {

    deque<int> dq;

    dq.push_back(1);
    dq.push_back(2);
    dq.push_back(3);

    dq.push_front(4);
    dq.push_front(5);

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    dq.pop_back();
    dq.pop_front();

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<dq.size()<<endl;

    sort(dq.begin(),dq.end());

    for(auto i : dq){
        cout<<i<<" ";
    }
    cout<<endl;

    // we can access elements in a dequeu using index.
    cout<<dq[0]<<" "<<dq[1]<<endl;

    cout<<dq.empty()<<endl;

    cout<<dq.front()<<" "<<dq.back()<<endl;

    return 0;
}