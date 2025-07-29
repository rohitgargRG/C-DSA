#include <bits/stdc++.h>
using namespace std;
// using 2 variables
// void reverse_array(int i , int j , vector<int>& arr){
//     // base
//     if(i >= j) return;

//     // swap
//     int temp = arr[i];
//     arr[i] = arr[j];
//     arr[j] = temp;

//     reverse_array(i + 1 , j - 1 , arr);
// }

// using 1 variable
void reverse_array(int i , vector<int>& arr){
    // base
    if(i >= arr.size()/2) return;

    // swap
    int temp = arr[i];
    arr[i] = arr[arr.size()-1-i];
    arr[arr.size()-1-i] = temp;

    reverse_array(i + 1 , arr);
}
int main() {
    vector<int> arr = {1,2,3,4,5};
    reverse_array(0,arr);
    for(auto it : arr) cout<<it<<" ";
    return 0;
}