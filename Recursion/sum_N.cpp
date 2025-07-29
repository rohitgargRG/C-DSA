#include <bits/stdc++.h>
using namespace std;

int find_sum(int n){
    if(n == 0){ 
        return 0;
    }

    return n + find_sum(n-1);
}

int fact(int n){
    if(n == 0){ 
        return 1;
    }

    return n * fact(n-1);
}
int main() {
    int n;
    cin>>n;

    cout<<find_sum(n)<<endl;
    cout<<fact(n)<<endl;
    return 0;
}