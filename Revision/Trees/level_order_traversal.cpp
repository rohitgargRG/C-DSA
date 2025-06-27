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

// function to create a binary tree
Node* createBT(){
    int x;
    cin>>x;

    // base case
    if(x == -1) return NULL;

    Node* temp = new Node(x);
    cout<<"enter left node of "<<temp->data<<endl;
    temp->left = createBT();
    cout<<"enter right node of "<<temp->data<<endl;
    temp->right = createBT();

    return temp;
}

// function to print a BT level wise
void printBT(Node* root){
    if(!root) return;

    // create a queue
    queue<Node*> q;
    q.push(root);
    int size;

    while(!q.empty()){
        size = q.size();

        while(size--){
            Node* temp = q.front();
            cout<<temp->data<<" ";
            q.pop();

            // push left and right child
            if(temp->left) q.push(temp->left);
            if(temp->right) q.push(temp->right);
        }
        cout<<endl;
    }
}


int main() {
    return 0;
}