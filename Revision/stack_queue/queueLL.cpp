#include <bits/stdc++.h>
using namespace std;
// queue using LL
class Node{
    public:
    int data;
    Node* next;

    public:
    Node(int data , Node* next){
        this -> data = data;
        this -> next = next;
    }
};

class queueLL{
    public:
    Node* start;
    Node* end;
    int size;

    public:
    queueLL(){
        this->start = NULL;
        this->end = NULL;
        this->size = 0;
    }

    // push - O(1)
    // push using end
    void push(int data){
        Node* temp = new Node(data,NULL);

        if(!start && !end){
            start = end = temp;
        }
        else{
            end->next = temp;
            end = end->next;
        }
        size++;
    }

    // pop -> O(1)
    // pop using start
    void pop(){
        if(!start && !end){
            cout<<"queue is empty"<<endl;
            return;
        }

        Node* to_del = start;
        start = start->next;
        to_del->next = NULL;
        delete to_del;
        size--;
    }

    // size - O(1)
    int new_size(){
        return size;
    }

    // front - O(1)
    int front(){
        if(!start && !end){
            cout<<"queue is empty"<<endl;
            return -1;
        }

        return start->data;
    }

};
int main() {
    queueLL q;

    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);

    cout<<q.front()<<endl;
    cout<<q.new_size()<<endl;

    q.pop();
    q.pop();

    cout<<q.front()<<endl;
    cout<<q.new_size()<<endl;

    return 0;
}