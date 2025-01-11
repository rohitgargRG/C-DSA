#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = left;
        this -> right = right;
    }
};

// preOrder - NLR
void preOrder(Node* root){

    // base case
    if(root == NULL) return;

    // N
    cout<<root -> data<<" ";

    // L
    preOrder(root -> left);

    // R
    preOrder(root -> right);
}

// InOrder - LNR
void inOrder(Node* root){

    // base case
    if(root == NULL) return;

    // L
    inOrder(root -> left);

    // N
    cout<<root->data<<" ";

    // R
    inOrder(root -> right);
}

// postOrder - LRN
void postOrder(Node* root){

    // base case
    if(root == NULL) return;

    // L
    postOrder(root -> left);

    // R
    postOrder(root -> right);

    // N
    cout<<root -> data<<" ";
}

Node* createBinaryTree(){
    queue<Node*> q;

    cout<<"Enter the root Node : ";
    int x;
    cin>>x;
    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        cout<<"Enter left child of "<<temp -> data<<" : ";
        int l;
        cin>>l;

        if(l != -1){
            temp -> left = new Node(l);
            q.push(temp -> left);
        }

        cout<<"Enter right child of "<<temp -> data<<" : ";
        int r;
        cin>>r;

        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp -> right);
        }   
    }
    return root;
}


int main()
{
    Node* root = createBinaryTree();

    cout<<"preOrder : ";
    preOrder(root);
    cout<<endl;


    cout<<"inOrder : ";
    inOrder(root);
    cout<<endl;

    cout<<"postOrder : ";
    postOrder(root);

    return 0;
}