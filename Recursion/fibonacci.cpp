#include <bits/stdc++.h>
using namespace std;

// TC - 2^n
int fibo(int n){

    // base
    if(n <= 1) return n;

    return fibo(n-1) + fibo(n-2);
}
int main() {
    int n;
    cin>>n;

    cout<<fibo(n);
    return 0;
}