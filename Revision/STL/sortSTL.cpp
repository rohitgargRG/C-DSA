#include <bits/stdc++.h>
using namespace std;

// desc order
bool comp1(int a,int b){
    return a > b;
}

bool comp2(string a,string b){
    return a.size() < b.size();
}
int main() {
    vector<int> arr({100,20,15,44,23,26});

    // sort in asc order
    sort(arr.begin() , arr.end());

    // sort in desc order
    sort(arr.begin(),arr.end(),greater<>());

    // sort a range in vector
    sort(arr.begin()+1 , arr.end()-2);

    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;

    // custom sort

    vector<int> v({100,50,25,12,65,89});

    // sort in desc order using comparator()
    sort(v.begin() , v.end() , comp1);

    for(auto i : v){
        cout<<i<<" ";
    }
    cout<<endl;

    vector<string> vs({"abcde","efgh","ab","s","rtyui"});

    // sort acc to string length
    sort(vs.begin() , vs.end() , comp2);

    for(auto i : vs){
        cout<<i<<" ";
    }
    cout<<endl;

    return 0;
}