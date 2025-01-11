#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;
    }
};

Node* BinaryTree(){
    // take input
    int x;
    cin>>x;

    // base case
    if(x == -1) return NULL;

    // create a node
    Node* temp = new Node(x);

    // left child
    cout<<"Enter left child of "<<x<<" : ";
    temp -> left = BinaryTree();


    // right child
    cout<<"Enter right child of "<<x<<" : ";
    temp -> right = BinaryTree();

    return temp;
}
int main()
{
    Node* temp = BinaryTree();
    return 0;
}