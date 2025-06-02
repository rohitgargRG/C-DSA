#include <bits/stdc++.h>
using namespace std;

class queueImplementation_Arrays{
    int start , end , currSize , size = 10;
    int q[10];

    public:
    queueImplementation_Arrays(){
        this->start = -1;
        this->end = -1;
        this->currSize = 0;
    }

    // push
    void new_push(int data){
        if(currSize == size){
            cout<<"queue is full"<<endl;
            return;
        }

        if(currSize == 0){
            start = 0;
            end = 0;
        }
        else{
            end = (end+1)%size;
        }

        q[end] = data;
        currSize++;
    }

    // pop
    int new_pop(){
        if(currSize == 0){
            cout<<"queue is already empty"<<endl;
            return -1;
        }

        int ele = q[start];

        if(currSize == 1){
            start = end = -1;
        }
        else{
            start = (start + 1)%size;
        }

        currSize -= 1;
        return ele;
    }

    // top
    int new_front(){
        if(currSize == 0){
            cout<<"queue is empty"<<endl;
            return -1;
        }

        return q[start];
    }

    // size
    int new_size(){
        return currSize;
    }

};

int main() {
    return 0;
}