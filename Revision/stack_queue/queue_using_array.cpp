#include <bits/stdc++.h>
using namespace std;

class queue_using_arrays{
    int start , end , currSize , size = 10;
    int arr[10];

    public:
    queue_using_arrays(){
        this->start = -1;
        this->end = -1;
        this->currSize = 0;
    }

    // push - O(1)
    // we will use end ptr to push the data
    void push(int data){
        if(currSize == size){
            cout<<"queue overflow"<<endl;
            return;
        }
        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end+1)%size; // *************
        }
        arr[end] = data;
        currSize++;
    }

    // pop -> O(1)
    // we will use start ptr for pop
    int pop(){
        if(currSize == 0){
            cout<<"queue underflow"<<endl;
            return -1;
        }
        int ele = arr[start];
        if(currSize == 1){
            start = end = -1;
        }
        else{
            start = (start+1)% size; // ********
        }
        currSize--;
        return ele;
    }

    // top -> O(1)
    int front(){
        if(currSize == 0){
            cout<<"queue is empty"<<endl;
            return -1;
        }
        return arr[start];
    }

    // size -> O(1)
    int new_size(){
        return currSize;
    }
};
int main() {
    queue_using_arrays q;

    q.push(100);
    q.push(200);
    q.push(300);
    q.push(400);

    cout<<q.new_size()<<endl;
    cout<<q.front()<<endl;

    q.pop();
    q.pop();

    cout<<q.new_size()<<endl;
    cout<<q.front()<<endl;

    return 0;
}