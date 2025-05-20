#include <bits/stdc++.h>
using namespace std;

void insertionSort(vector<int>& arr){
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int j = i;
        while(j > 0 && arr[j-1] > arr[j]){
            // swap
            int temp = arr[j];
            arr[j] = arr[j-1];
            arr[j-1] = temp;
            j--;
        }
    }
}

// recursive insertion sort
void recursiveInsertionSort(vector<int>& arr , int j, int n){

    // base case 
    if(n == 1 || j >= n) return;

    // iterate and swap
    while(j > 0 && arr[j-1] > arr[j]){
        // swap
        int temp = arr[j];
        arr[j] = arr[j-1];
        arr[j-1] = temp;
        j--;
    }

    // make recursive calls
    recursiveInsertionSort(arr,j+1,n);
}
int main() {
    vector<int> arr = {10,20,30,15,12,100};
    int n = arr.size();

    // insertionSort(arr);
    recursiveInsertionSort(arr,1,n);

    for(int i = 0; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}