#include<bits/stdc++.h>
using namespace std;
// node class
class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this -> data = data;
            this->left = NULL;
            this->right = NULL;
        }
};

int main()
{   
    // use queue data sructure
    queue<Node*> q;

    // root node
    int x;
    cin>>x;

    Node* root = new Node(x);
    q.push(root);

    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // left node of current node
        cout<<"Enter the left child of node "<<temp->data<<" : ";
        int l;
        cin>>l;

        if(l != -1){
            temp -> left = new Node(l);
            q.push(temp -> left);
        } 
        // right node of current node
        cout<<"Enter the right child of node "<<temp->data<<" : ";
        int r;
        cin>>r;

        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp -> right);
        }
    }


    return 0;
}

// NOTE - this is also called as level order traversal
// since in each step we are traversing all nodes of a particular level.