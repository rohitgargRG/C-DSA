#include <bits/stdc++.h>
using namespace std;
// node class
class Node{
    public:
    int data;
    Node* left ; 
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;                
    }
};

// insertion at BST
Node* insert(Node* root , int target){
    if(root == NULL){
        // create node and return its address to above node.
        Node* temp = new Node(target);
        return temp;
    }

    // left side
    if(target < root -> data){
        root -> left = insert(root->left , target);
    }
    else{ // right side
        root -> right = insert(root->right , target);
    }

    // return address
    return root;
}

// search in a BST
bool Search(Node* root , int target){
    // base case
    if(!root) return false;
    if(root -> data == target) return true;

    
    if(root -> data > target){
        return Search(root -> left , target);
    }
    else{
        return Search(root -> right , target);
    }
}




// print tree(inorder)
void inorder(Node* root){
    if(!root) return;

    // left
    inorder(root -> left);

    cout<<root -> data << " ";

    // right
    inorder(root -> right);
}

int main() {

    vector<int> arr = {3,7,4,1,6,8};

    Node* root = NULL;
    int n = arr.size();

    for(int i = 0 ; i < n ; i++){
        root = insert(root , arr[i]);
    }

    // traverse

    // ********** gives elements in sorted(ascending) order.
    inorder(root);

    // search
    cout<<endl;
    cout<<Search(root , 7);
    return 0;
}