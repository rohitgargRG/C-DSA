#include <bits/stdc++.h>
using namespace std;

void merge(vector<int>& arr , int low ,int mid , int high){
    
    // write code for merge two sorted array
    // left array -> low to mid
    // right array -> mid+1 to high

    int left = low;
    int right = mid+1;
    vector<int> temp;

    while(left <= mid && right <= high){

        // two cases
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            right++;
        }
    }

    // fill remaining elements
    while(left <= mid){
        temp.push_back(arr[left]);
        left++;
    }

    while(right <= high){
        temp.push_back(arr[right]);
        right++;
    }

    // fill the elements in actual array
    for(int i = low ; i <= high ; i++){
        arr[i] = temp[i-low];
    }
}

void mergeSort(vector<int>& arr , int low , int high){
    
    // base case
    if(low == high) return;  // case when size of arr = 1 , (low == high)

    // find mid
    int mid = (low+high)/2;

    // sort left part -> low to mid
    mergeSort(arr , low , mid);

    // sort right part -> mid+1 to high
    mergeSort(arr , mid+1 , high);

    // merge left and right part
    merge(arr , low , mid , high);
}


int main() {
    vector<int> arr = {100,20,40,25,60,12,11};

    mergeSort(arr,0,arr.size()-1);

    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}