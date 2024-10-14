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

Node* binaryTree(){

    int x;
    cin>>x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);

    // left side create
    cout<<"Enter the left child of "<<x<<": ";
    temp -> left = binaryTree();
    
    // right side create
    cout<<"Enter the right child of "<<x<<": ";
    temp -> right = binaryTree();

    return temp;
}
int main()
{

    return 0;
}