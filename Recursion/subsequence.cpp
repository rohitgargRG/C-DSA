#include <bits/stdc++.h>
using namespace std;

// very important function.
// TC - O(2^n * n) , sc - O(n)
void print_subsequence(int ind , vector<int>& arr , vector<int>& ds , int n){

    // base case
    if(ind >= n){
        for(auto it : ds) cout<<it<<" ";
        cout<<endl;
        return;
    }

    // take - this element will be a part of subsequence
    ds.push_back(arr[ind]);
    print_subsequence(ind + 1 , arr , ds , n);

    // not take - this element will not be part of my subsequence
    ds.pop_back();
    print_subsequence(ind + 1 , arr , ds , n);
}
int main() {
    vector<int> arr = {3,1,2};
    int n = 3;
    vector<int> ds;
    print_subsequence(0,arr,ds,n); 
    return 0;
}