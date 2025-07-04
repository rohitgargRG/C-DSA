#include <bits/stdc++.h>
using namespace std;

// BST from array
class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

// insertion at BST
Node* insert(Node* root , int target){

    // base case
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }

    // compare value of target with current node value
    if(target < root->data){
        // go left
        root->left = insert(root->left , target);
    }
    else{
        // go right
        root->right = insert(root->right , target);
    }

    return root;
}

// print BST
void inOrder(Node* root){
    if(!root) return;

    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}

int main() {
    Node* root = new Node(100);

    root = insert(root , 20);
    root = insert(root , 110);
    root = insert(root , 40);
    root = insert(root , 30);
    root = insert(root , 120);
    root = insert(root , 101);

    inOrder(root);
    return 0;
}