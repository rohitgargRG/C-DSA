#include <bits/stdc++.h>
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

// size of binary tree -> count total no of nodes in binary tree.

// approach 1 - apply any traversal and find size.

void preOrder_size(Node* root , int& size){
    if(root == NULL) return;

    size++;
    preOrder_size(root -> left , size);
    preOrder_size(root -> right , size);
}

// approach 2 -> 1 + (total_nodes in left subtree) + (total nodes in right subtree)

int size_of_bt(Node* root){
    if(root == NULL) return 0;

    return 1 + size_of_bt(root -> left) + size_of_bt(root->right);
}
int main() {
    return 0;
}