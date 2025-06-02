#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int& data){
        this -> data = data;
        this -> next = NULL;
    }
};

class Queue_usingLL{
    public:
    Node* start;
    Node* end;
    int size = 0;

    Queue_usingLL(){
        this -> start = NULL;
        this -> end = NULL;
    }

    // push - O(1)
    void new_push(int& ele){
        Node* temp = new Node(ele);

        if(start == NULL && end == NULL){
            start = end = temp;
        }
        else{
            end -> next = temp;
            end = end -> next;
        }

        size++;
    }

    // pop - O(1)
    void new_pop(){
        if(start == NULL && end == NULL){
            cout<<"queue is empty"<<endl;
            return;
        }
        else{
            Node* temp = start;
            start = start -> next;
            temp ->next = NULL;
            delete temp;
            size--;
        }
    }

    

};

int main() {
    return 0;
}