#include <bits/stdc++.h>
using namespace std;

class MinHeap{
    int* arr;
    int size; // size of the min Heap
    int tot_size; // total size of array

    public:
    MinHeap(int n){
        arr = new int[n];
        size = 0;
        tot_size = n;
    }

    // insert into min heap

    void insert(int value){
        // overflow check
        if(size == tot_size){
            cout<<"heap overflow\n";
            return;
        }

        // value will always be inserted at the end of array
        arr[size] = value;
        int index = size;
        size++;

        // now we need to take the inserted element at it's correct position
        // parent = arr[(index - 1) / 2] , child = arr[index]

        while(index > 0 && (arr[(index - 1) / 2] > arr[index])){
            swap(arr[(index - 1) / 2] , arr[index]);
            index = (index - 1) / 2; 
        }

        cout<<arr[index]<<" inserted into heap\n";
    }

    void print()
    {
        for(int i = 0; i < size ; i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

    // deletion in min Heap
    void Delete(){

        // check underflow
        if(size == 0){
            cout<<"heap underflow\n";
            return;
        }

        cout<<arr[0]<<" deleted from heap\n";
        arr[0] = arr[size - 1];
        size--;

        if(size == 0) return ;
        Heapify(0);
    }

    void Heapify(int index){
        int largest = index;
        int left = 2*index+1;
        int right = 2*index+2;

        // Largest will store the index of the element which is greater b/w 
        // parent , left and right child.

        if(left < size && arr[left] < arr[largest]){
            largest = left;
        }

        if(right < size && arr[right] < arr[largest]){
            largest = right;
        }

        if(largest != index){
            swap(arr[index] , arr[largest]);
            Heapify(largest);
        }
    }
};
int main() {
    MinHeap H1(6);
    H1.insert(4);
    H1.insert(14);
    H1.insert(11);
    H1.print();
    H1.insert(114);
    H1.insert(24);
    H1.insert(1);
    H1.print();

    H1.Delete();
    H1.Delete();
    H1.print();
    H1.Delete();
    H1.Delete();
    H1.print();
    H1.Delete();
    H1.Delete();
    H1.Delete();
    H1.print();


    return 0;
}