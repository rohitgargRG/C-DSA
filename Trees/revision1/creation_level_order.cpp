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
        this -> left = NULL;
        this -> right = NULL;
    }
};
int main()
{
    // step 1 - create  a queue
    queue<Node*> q;

    // step 2 - root node
    cout<<"Enter the root node : ";
    int x;
    cin>>x;
    Node* root = new Node(x);

    // step 3 - push root on queue
    q.push(root);

    // step 4 - now take left and right childs aas input for each node
    // -1 -> mean no child

    while(!q.empty()){
        Node * temp = q.front();
        q.pop();

        // left child
        cout<<"Enter left child of "<<temp -> data<<" : ";
        int l;
        cin>>l;

        // check if value is not -1 , since -1 indicates no child
        if(l != -1){
            temp ->  left = new Node(l);
            q.push(temp -> left); 
        }

        // right child
        cout<<"Enter right child of "<<temp -> data<<" : ";
        int r;
        cin>>r;

        // check if value is not -1 , -1 indicates no child
        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp -> right);
        }

    }
    return 0;
}