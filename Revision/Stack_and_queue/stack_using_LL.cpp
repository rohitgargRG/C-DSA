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

class stack_using_LL{
    public:
    int size;
    Node* top;

    stack_using_LL(){
        this -> size = 0;
    }

    // push - O(1)
    void new_push(int& ele){
        Node* temp = new Node(ele);

        temp -> next = top;
        top = temp;
        size++;
    }                                                                                                                                                                                                                                                                                                                     

    // pop - O(1)
    void New_pop(){
        Node* temp = top;
        top = top->next;
        temp -> next = NULL;
        delete temp;
        size--;
    }

    // top
    int new_top(){
        if(top == NULL) return -1;
        return top->data;
    }

    // size
    int new_size(){
        return size;
    }

};
int main() {
    return 0;
}