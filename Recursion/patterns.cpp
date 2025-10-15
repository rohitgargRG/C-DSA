#include <bits/stdc++.h>
using namespace std;

// print all subsequences with sum == k
void find_subsequences(int ind , vector<int>& arr  ,vector<int>& ds, int n , int k , int& sum){

    // base case
    if(ind >= n){
        if(sum == k){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
        } 
        return;
    }

    // take 
    ds.push_back(arr[ind]);
    sum += arr[ind];
    find_subsequences(ind+1 ,arr,ds,n,k,sum);

    // not - take
    sum -= arr[ind];
    ds.pop_back();
    
    find_subsequences(ind+1 ,arr,ds,n,k,sum);
}

// function to print only one subsequence with sum == k
bool printS(int ind , vector<int>& arr  ,vector<int>& ds, int n , int k , int& sum){

    // base case
    if(ind >= n){
        // condition satisfied
        if(sum == k){
            for(auto it : ds) cout<<it<<" ";
            cout<<endl;
            return true;
        }

        // condition not satisfied
        return false;
    }

    // take
    ds.push_back(arr[ind]);
    sum += arr[ind];

    // if you got the answer, then simply return to avoid future recursion calls
    if(printS(ind+1 , arr,ds,n,k,sum)) return true;

    // not take
    sum -= arr[ind];
    ds.pop_back();

    if(printS(ind+1 , arr,ds,n,k,sum)) return true;

    return false;
}

// function to count no of subsequences with sum == k;
int cnt_subsequences(int idx , vector<int>& arr , int n , int k , int& sum){

    // base case
    if(idx >= n){
        //condn satisfied
        if(sum == k) return 1;

        // condn not satisfied
        return 0;
    }

    // take
    sum += arr[idx];
    int left = cnt_subsequences(idx+1 , arr , n , k , sum);

    // not take
    sum -= arr[idx];
    int right = cnt_subsequences(idx+1 , arr , n , k , sum);

    return left + right;
}
int main() {
    vector<int> arr = {1,2,1};
    int n = 3;
    int k = 2;
    vector<int> ds;
    int sum = 0;
    // find_subsequences(0,arr ,ds, n, k,sum);
    // printS(0,arr,ds,n,k,sum);

    cout<<cnt_subsequences(0,arr,n,k,sum);
    return 0;
}