#include<bits/stdc++.h>
using namespace std;

bool checkPrime(int& n){
    int cnt = 0;

    for(int i = 1 ; i*i <= n ; i++){
        if(n%i == 0){
            cnt++;

            if(n/i != i) cnt++;
        }
    }

    return cnt == 2;
}


vector<int> print_prime_factors_1(int& n){
    vector<int> ans;
    for(int i=2 ; i <= n ; i++){
        
    }
}
int main(){


    return 0;
}