#include <bits/stdc++.h>
using namespace std;


// heapSort
void HeapSort(int arr[] , int n){

    for(int i = n - 1 ; i > 0 ; i--){
        swap(arr[i] , arr[0]);
        Heapify(arr,0,i);
    }
}


// write heapify function with iterative approach
void Heapify(int arr[] , int index , int n)
{
    int largest = index;
    int left = 2*index+1;
    int right = 2*index+2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    }

    if(right < n && arr[right] > arr[largest]){
        largest = right;
    }

    if(largest != index){
        swap(arr[index] , arr[largest]);
        Heapify(arr,index,n);
    }
}

void BuildMaxHeap(int arr[] , int n){
    for(int i = n/2 - 1 ; i >= 0 ; i--){
        Heapify(arr,i,n);
    }
}

void PrintMaxHeap(int arr[] , int n){
    for(int i = 0; i < n ; i++){
        cout<<arr[i]<<" ";
    }
}
int main() {
    return 0;
}