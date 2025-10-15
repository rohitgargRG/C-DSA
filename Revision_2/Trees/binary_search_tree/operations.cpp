#include <bits/stdc++.h>
using namespace std;

// node class
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

// insert operation
// TC => best case = O(1) , avg = O(log2N) , worst = O(n)
Node* insert(Node* root , int target){

    // case1 - root is null
    if(!root){
        Node* temp = new Node(target);
        return temp;
    }

    // case2 - target is smaller than current node -> go left.
    if(target < root->data){
        root->left = insert(root->left , target);
    }
    // case3 - target is greater than current node -> go right.
    else{
        root->right = insert(root->right , target);
    }

    return root;
}

// search operation
// TC => best case = O(1) , avg = O(log2N) , worst = O(n)
bool search(Node* root , int target){
    if(!root) return false;

    // three cases

    // case1 - root is the target
    if(root->data == target) return true;

    // case 2 - target is less than current node value -> go left.
    if(root->data > target){
        return search(root->left , target);
    }
    // case 3 - target is greater than current node value -> go right.
    else{
        return search(root->right , target);
    }

    return false;
}

// deletion
// TC => best case = O(1) , avg = O(log2N) , worst = O(N)
Node* deleteNode(Node* root , int target){
    // base check
    if(!root) return NULL;

    // step 1 - search the element
    if(target < root->data){
        root->left = deleteNode(root->left , target);
    }
    else if(target > root->data){
        root->right = deleteNode(root->right , target);
    }
    // element found
    else{
        // three cases

        // case1 - it is a leaf node
        if(!root->left && !root->right){
            // delete the node and return null
            delete(root);
            return NULL;
        }
        // case2 - only one child exists
        // delete the node and return address of child
        else if(!root->right){ // only left child exists
            Node* temp = root->left;
            delete(root);
            return temp;
        }
        else if(!root->left){ // only right child exists
            Node* temp = root->right;
            delete(root);
            return temp;
        }
        // case3 - both child exists
        // here we need to replace the root node with some node.
        // replace the node with
        // either rightmost node of left subtree
        // or leftmost node of right subtree.
        else{
            // find rightmost node of left subtree
            Node* child = root->left;
            Node* parent = root;

            while(child->right){
                parent = child;
                child = child->right;
            }

            // handle edge cases
            if(root != parent){
                parent->right = child->left;
                child->left = root->left;
                child->right = root->right;
                delete root;
                return child;
            }
            else{
                child->right = root->right;
                delete root;
                return child;
            }
        }
    }

    return root;
}

// inorder traversal
void inorder(Node* root){
    if(!root) return;

    //L
    inorder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inorder(root->right);
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
    cout<<search(root , 7);
    return 0;
    return 0;
}