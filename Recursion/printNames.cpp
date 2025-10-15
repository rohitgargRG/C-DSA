#include <bits/stdc++.h>
using namespace std;

void printNames(int k,int n){
    // base
    if(k == n) return;

    cout<<"Rohit"<<endl;
    printNames(k+1 , n);
}
int main() {
    int n;
    cin>>n;
    printNames(0,n);
    return 0;
}