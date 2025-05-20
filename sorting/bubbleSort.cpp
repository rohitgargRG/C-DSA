#include <bits/stdc++.h>
using namespace std;

// bubble sort
// brings the maximum element at last by performing adjacent swaps

void bubbleSort(vector<int>& arr){
    int n = arr.size();

    for(int i = n-1 ; i >= 1 ; i--){ 
        for(int j = 0 ; j <= i-1 ; j++){
            if(arr[j] > arr[j+1]){
                // swap
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
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