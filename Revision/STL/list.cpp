#include <bits/stdc++.h>
using namespace std;

int main() {
    // creation
    list<int> l = {1,2,3,4};

    for(auto i : l){
        cout<<i<<" ";
    }

    // operations

    l.push_front(0);
    l.push_back(5);
    l.pop_front();
    l.pop_back();
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;
    cout<<l.size()<<endl;

    auto it = l.begin();
    advance(it,2);  // it moves two posn ahead , i.e, points to 2nd index.
    l.insert(it,1000);

    for(auto i = l.begin() ; i != l.end() ; i++){
        cout<<*i<<" ";
    }


    return 0;
}