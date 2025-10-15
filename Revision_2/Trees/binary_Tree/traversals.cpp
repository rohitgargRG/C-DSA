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
        this->left = left;
        this->right = right;
    }
};

// function to create a binary tree
Node* create_tree_level_wise(){

    // use a queue
    queue<Node*> q;

    // take root as input
    cout<<"enter root node : ";
    int x;
    cin>>x;
    
    Node* root = new Node(x);
    q.push(root);

    // start popping
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // take left child as input
        int l;
        cout<<"enter left child of "<<temp->data<<" : ";
        cin>>l;

        if(l != -1){
            temp->left = new Node(l);
            q.push(temp->left);
        }

        // take right child as input
        int r;
        cout<<"enter right child of "<<temp->data<<" : ";
        cin>>r;

        if(r != -1){
            
            temp->right = new Node(r);
            q.push(temp->right);
        }
    }

    return root;
}


int main() {
    Node* root = create_tree_level_wise();

    
    return 0;
}