#include <bits/stdc++.h>
using namespace std;

// node
class Node{
    public:
    int data,height;
    Node* left,*right;

    Node(int data){
        this->data = data;
        height = 1;
        left = right = NULL;
    }
};

int getHeight(Node* root){
    if(!root) return 0;

    return root -> height;
}

int getBalance(Node* root){
    return getHeight(root -> left) - getHeight(root -> right);
}

// right rotation
Node* rightRotation(Node* root)
{
    Node* child = root -> left;
    Node* childRight = child -> right;

    child->right = root;
    root -> left = childRight;

    // update height
    root -> height = 1 + max(getHeight(root -> left) , getHeight(root -> right));
    child -> height = 1 + max(getHeight(child -> left) , getHeight(child -> right));

    return child;
}

// left rotation
Node* leftRotation(Node* root)
{
    Node* child = root -> right;
    Node* childLeft = child -> left;

    child -> left = root;
    root -> right = childLeft;

    // update height
    root -> height = 1 + max(getHeight(root -> left) , getHeight(root -> right));
    child -> height = 1 + max(getHeight(child -> left) , getHeight(child -> right));

    return child;
}

void inorder(Node* root){
    if(!root) return;

    inorder(root -> left);
    cout<<root -> data<<" ";
    inorder(root -> right);
}

Node* insert(Node* root , int key){

    // root does not exist
    if(!root) return new Node(key);

    // root does exist

    // left side
    if(key < root -> data){
        root -> left = insert(root -> left , key);
    }
    // right side
    else if(key > root -> data){
        root -> right = insert(root -> right , key);
    }
    else{
        return root;  // duplicate elememnts are not allowed
    }


    // update height while returning
    root -> height = 1 + max(getHeight(root -> left) , getHeight(root -> right));

    // check balancing
    int balance = getBalance(root);

    // LL case  : right rotation of top element
    if(balance > 1 && key < root -> left -> data){
        return rightRotation(root);
    }
    // RR case  : left rotation of top element
    else if(balance < -1 && key > root -> right -> data){
        return leftRotation(root);
    }
    // LR case : left roration of middle
    //         : right rotation of top
    else if(balance > 1 && key > root -> left -> data){
        root -> left = leftRotation(root -> left);
        return rightRotation(root);
    }
    // RL case  : right rotation of middle
    //          : left rotation of top
    else if(balance < -1 && key < root -> right -> data){
        root -> right = rightRotation(root -> right);
        return leftRotation(root);
    }
    // no unbalancing
    else{
        return root;
    }
}
int main() {
    // no duplicates
    Node* root = NULL;

    root = insert(root ,10);
    root = insert(root ,20);
    root = insert(root ,30);
    root = insert(root ,50);
    root = insert(root ,70);
    root = insert(root ,5);
    root = insert(root ,100);
    root = insert(root ,95);

    inorder(root);
    
    return 0;
}