#include <bits/stdc++.h>
using namespace std;

int FindPartitionIndex(vector<int>& arr , int low , int high){

    // assume pivot
    int pivot = arr[low];

    int i = low;
    int j = high;

    while(i < j){

        while(arr[i] <= pivot && i <= high-1){
            i++;
        }

        while(arr[j] > pivot && j >= low + 1){
            j--;
        }

        if(i < j){
            // swap
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }

    // place pivot at it's correct posn
    int temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j;
}
void quickSort(vector<int>& arr , int low , int high){

    // low == high -> only one element in array
    if(low < high){
        int partition_index = FindPartitionIndex(arr,low,high);

        // make recursive calls for left subarray and right subarray
        quickSort(arr , low , partition_index-1);
        quickSort(arr , partition_index+1 , high);
    }
}
int main() {
    vector<int> arr = {100,20,30,42,55,12,23};
    int n = arr.size();

    quickSort(arr,0,n-1);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}