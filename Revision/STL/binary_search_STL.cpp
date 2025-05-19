#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v1 = {10,20,30,40,50};
    vector<int> v2 = {10,15,20,20,30};
    vector<int> v3 = {10,30,40,50};
    int key = 20;

    // binary_search()
    cout<<binary_search(v1.begin(),v1.end() , key)<<endl;

    // lower_bound

    cout<<lower_bound(v1.begin(),v1.end(),key) - v1.begin()<<endl;
    cout<<lower_bound(v2.begin(),v2.end(),key) - v2.begin()<<endl;
    cout<<lower_bound(v3.begin(),v3.end(),key) - v3.begin()<<endl;

    // all elements are greater than key
    cout<<lower_bound(v1.begin(),v1.end(),5) - v1.begin()<<endl;
    cout<<lower_bound(v1.begin(),v1.end(),100) - v1.begin()<<endl;

    // upper_bound

    cout<<upper_bound(v1.begin(),v1.end(),key) - v1.begin()<<endl;
    cout<<upper_bound(v2.begin(),v2.end(),key) - v2.begin()<<endl;
    cout<<upper_bound(v3.begin(),v3.end(),key) - v3.begin()<<endl;

    cout<<upper_bound(v1.begin(),v1.end(),5) - v1.begin()<<endl;
    cout<<upper_bound(v1.begin(),v1.end(),100) - v1.begin()<<endl;

    return 0;
}