#include <bits/stdc++.h>
using namespace std;

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

// create a BT uisng DFS
Node* createBT(){
    int x;
    cin>>x;

    if(x == -1) return NULL;

    Node* node = new Node(x);

    cout<<"enter left child of "<<x<<endl;
    node->left = createBT();
    cout<<"enter right child of "<<x<<endl;
    node->right = createBT();

    return node;
}

// naive approach - O(n^2)

// function to update left subtree
void increment(Node* curr , int diff){

    // if left child is not NULL
    if(curr->left){
         // increment it's data
        curr->left->data += diff;

        // make recursive calls to fix it's descendent
        increment(curr->left , diff);
    }
    // if right child is not null
    else if(curr->right){
        curr->right->data += diff;
        increment(curr->right , diff);
    }
}

void changeTree(Node* root){

    // if tree is empty
    // or it's a leaf node , return true
    if(!root || (!root->left && !root->right)) return;

    // convert left and right subtree first
    changeTree(root->left);
    changeTree(root->right);

    int ldata = 0 , rdata = 0;

    // update left and right child data
    if(root->left) ldata = root->left->data;
    if(root->right) rdata = root->right->data;

    // get the difference of node's data and children sum
    int diff = (ldata + rdata) - root->data;

    // three cases
    if(diff < 0){
        // means nodes data is greater than children sum
        // in this case we need to update the chldrens
        increment(root , abs(diff));
    }
    else if(diff > 0){
        // means children sum is greter than node data
        // increment node data
        root->data += diff;
    }

    // if diff == 0 , that means it follows children sum property.

}

// print BT
void printBT(Node* root){
    if(!root) return;

    // level order traversal
    queue<Node*> q;
    q.push(root);
    int size;

    while(!q.empty()){
        size = q.size();

        while(size--){
            Node* temp = q.front();
            q.pop();

            cout<<temp->data<<" ";

            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<endl;
    }
}

// optimal soln -> O(n) TC , O(h) SC
void convertTree(Node* root){
    if(!root) return;

    int child = 0;

    // find children sum
    if(root->left) child += root->left->data;
    if(root->right) child += root->right->data;

    // two cases
    if(child >= root->data){
        // no problem
        root -> data = child;
    }
    else{
        if(root->left) root->left->data = root->data;
        else if(root->right) root->right->data = root->data;
    }

    // go left and right
    convertTree(root->left);
    convertTree(root->right);

    // re-update root data
    int tot = 0;
    if(root->left) tot += root->left->data;
    if(root->right) tot += root->right->data;
    if(root->left || root->right) root->data = tot;
}
int main() {
    Node* root = createBT();

    changeTree(root);

    printBT(root);
    return 0;
}