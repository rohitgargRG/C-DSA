#include <bits/stdc++.h>
using namespace std;

void n_to_one(int i){
    if(i < 1) return;

    cout<<i<<endl;
    n_to_one(i-1);
}
void one_to_n(int i ,int n){
    if(i > n) return;

    cout<<i<<endl;
    one_to_n(i+1 , n);
}

void one_to_n_backtracking(int i){
    if(i < 1) return;

    
    one_to_n_backtracking(i-1);
    cout<<i<<endl;
}

void n_to_one_backtracking(int i,int n){
    if(i > n) return;
    n_to_one_backtracking(i+1 , n);
    cout<<i<<endl;
}
int main() {
    int n;
    cin>>n;

    // one_to_n(1,n);
    // n_to_one(n);
    // one_to_n_backtracking(n);
    n_to_one_backtracking(1 , n);
    return 0;
}