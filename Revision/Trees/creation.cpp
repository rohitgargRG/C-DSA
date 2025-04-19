#include <bits/stdc++.h>
using namespace std;

// node class
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


// recursive method to create binary tree
Node* BinaryTree(){
    int x;
    cin>>x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);
    cout<<"Enter left child of "<<x<<endl;
    temp -> left = BinaryTree();

    cout<<"Enter right child of "<<x<<endl;
    temp -> right = BinaryTree();

    return temp;
}

int main() {
    int x;
    cin>>x;

    // for tree creation , we will use a queue of Node* type.
    queue<Node*> q;

    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // left and right child
        cout<<"Enter left child of node "<<temp->data<<endl;
        int l;
        cin>>l;

        // -1 -> NULL
        if(l != -1){
            temp -> left = new Node(l);
            q.push(temp -> left);
        }
        
        cout<<"Enter right child of node "<<temp->data<<endl;
        int r;
        cin>>r;

        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp -> right);
        }
    }


    return 0;
}