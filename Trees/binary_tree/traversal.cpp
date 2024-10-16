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

    queue<Node*> q;

    int x;
    cin>>x;

    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"enter left child of" << temp -> data << ": ";
        int l;
        cin>>l;
        if(l != -1){
            temp -> left = new Node(l);
            q.push(temp -> left);
        }

        cout<<"enter right child of" << temp -> data << ": ";
        int r;
        cin>>r;
        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp -> right);
        }
    }

    return root;
}

// Traversals
void preOrder(Node* root){ // NLR

    // base case
    if(root == NULL) return;

    cout<<root -> data<<" ";
    preOrder(root -> left);
    preOrder(root -> right);

}

void inOrder(Node* root){  // LNR

    // base case
    if(root == NULL) return;

    inOrder(root -> left);
    cout<<root -> data<<" ";
    inOrder(root -> right);
}

void postOrder(Node* root){  // LRN

    // base case
    if(root == NULL) return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root -> data <<" ";
}


int main()
{
    Node* root = binaryTree();

    // preorder
    cout<<"preOrder: ";
    preOrder(root);
    cout<<endl;

     // Inorder
    cout<<"inOrder: ";
    inOrder(root);
    cout<<endl;

     // postOrder
    cout<<"postOrder: ";
    postOrder(root);
    cout<<endl;
    return 0;
}