#include <bits/stdc++.h>
using namespace std;
// fibonacci using DP
// NOTE - avoid using global variables

// TC - O(n) , SC - O(n + n) -> memoization
int fibo_dp(int n , vector<int>& dp){

    // base check
    if(n <= 1) return n;

    // check if the answer for current problem is already precomputed
    if(dp[n] != -1) return dp[n];

    // store the answer of current subproblem in dp array and return it

    return dp[n] = fibo_dp(n-1 , dp) + fibo_dp(n-2,dp);
}

// tabular form 
// TC - O(n) , SC - O(n)  -> no auxiliary space required
int fibo_tabular(int n , vector<int>& dp){
    
    // fill base cases
    dp[0] = 0 , dp[1] = 1;

    // start iterating and updaet value
    for(int i = 2 ; i <= n ; i++){
        dp[i] = dp[i-1] + dp[i-2];
    }

    return dp[n];
}

// space optimized 
// TC - O(n) , SC - O(1)

int fibo_spaceOptimized(int n){
    int prev = 1;
    int prev2 = 0;

    for(int i = 2; i <= n ; i++){
        int curri = prev + prev2;
        prev2 = prev;
        prev = curri;
    }

    return prev;
}
int main() {
    int n;
    cin>>n;

    // create  DP array
    vector<int> dp(n+1 , -1);


    // using memoization
    cout<<"memoization : "<<fibo_dp(n,dp)<<endl;

    // using tabular
    cout<<"tabular : "<<fibo_tabular(n,dp)<<endl;

    // using space optimization
    cout<<"space optimised : "<<fibo_spaceOptimized(n)<<endl;

    return 0;
}