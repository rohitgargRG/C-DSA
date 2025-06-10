#include <bits/stdc++.h>
using namespace std;

// stack using a  LL
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data,Node* next){
        this->data = data;
        this->next = next;
    }
};

class stackLL{
    public:
    Node* top;
    int size;

    stackLL(){
        this->top == NULL;
        this->size = 0;
    }

    //push - O(1)
    void push(int data){
        Node* temp = new Node(data,NULL);

        // store ptr in reverse order
        temp->next = top;
        top = temp;
        size++;
    }

    // pop - O(1)
    void pop(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return;
        }
        Node* temp = top;
        top = top->next;
        temp->next = NULL;
        delete temp;
        size--;
    }

    // top
    int new_top(){
        if(top == NULL){
            cout<<"stack is empty"<<endl;
            return -1;
        }
        return top->data;
    }

    // size
    int new_size(){
        return size;
    }

};
int main() {

    stackLL st;

    st.push(100);
    st.push(200);
    st.push(300);
    st.push(400);

    cout<<st.new_size()<<endl;
    cout<<st.new_top()<<endl;

    st.pop();
    st.pop();

    cout<<st.new_size()<<endl;
    cout<<st.new_top()<<endl;

    return 0;
}