#include <bits/stdc++.h>
using namespace std;

// bubble sort
// brings the maximum element at last by performing adjacent swaps
// TC - O(n^2) -> worst and avg case
// TC - O(n) -> best case

void bubbleSort(vector<int>& arr){
    int n = arr.size();

    for(int i = n-1 ; i >= 1 ; i--){ 
        bool swap = false;
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = true;
            }
        }
        // optimisation -> if no swap occurs , then it is already sorted
        if(!swap) break;
    }
}

// bubble sort recursive
void bubbleSortRecursive(vector<int>& arr , int n){

    // base case
    if(n == 1) return;

    // iterate and swap
    int didSwap = 0;
    for(int j = 0; j <= n-2 ; j++){
        if(arr[j] > arr[j+1]){
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            didSwap = 1;
        }
    }

    // optimisation for best case
    if(didSwap == 0) return;

    // make recursive calls
    bubbleSortRecursive(arr , n-1);
}
int main() {
    vector<int> arr = {10,20,30,15,12,100};

    bubbleSort(arr);

    for(int i = 0; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}