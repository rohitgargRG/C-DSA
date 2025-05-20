#include <bits/stdc++.h>
using namespace std;

void selectionSort(vector<int>& arr){
    int n = arr.size();

    int mini;
    for(int i = 0; i < n-2 ; i++){
        mini = i;
        for(int j = i ; j <= n-1 ; j++){
            if(arr[j] < arr[mini]) mini = j;
        }

        // swap arr[i] and arr[mini]
        int temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;
    }
}
int main() {
    vector<int> arr = {10,20,30,15,12,100};

    selectionSort(arr);

    for(int i = 0; i < arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}