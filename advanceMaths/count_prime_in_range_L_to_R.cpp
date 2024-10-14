// given q queries , in each query you are given  L and R , find no of prime numbers between L to R for each query.

#include<bits/stdc++.h>
using namespace std;

vector<int> seive(){
    int n = pow(10,6);
    vector<int> arr(n + 1, 1);

    for(int i = 2 ; i*i <= n ; i++){
        if(prime[i] == 1){
            for(int j = i*i ; j <= n ; j += i){
                arr[j] = 0;
            }
        }
    }

    return arr;
}

int main(){
    // optimal approach - 
    // 1) apply sieve algorithm to get the list that indicates which number are prime and which are not between 1 to n.
    // 2) apply prefix sum to this list.
    // 3) now , to find number of primes between L and R , just do (prefix[R] - prefix[L-1]).
    int q;
    cin>>q;

    int n;
    cin>>n;

    vector<int> arr = seive();

    vector<int> prefix(n+1 , 0);
    prefix[0] = arr[0];

    for(int i = 1 ; i<=n ; i++){
        prefix[i] = prefix[i-1] + arr[i];
    }

    vector<int> prime;

    while(q--){
        int l,r;
        cin>>l>>r;

        if(l != 0) prime.push_back(prefix[r] - prefix[l-1]);

    }

    return 0;
}