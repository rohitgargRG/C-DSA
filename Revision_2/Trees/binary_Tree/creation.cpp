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

// create tree using Level order traversal
// TC = O(n) , Sc = O(h)
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

// method 2 - recursive method for tree creation
Node* binaryTree(){

    int x;
    cin>>x;

    // base case
    if(x == -1) return NULL;

    // create a Node
    Node* temp = new Node(x);

    // left child 
    cout<<"enter left child of "<<x<<" : ";
    temp->left = binaryTree();

    // right child
    cout<<"enter right child of "<<x<<" : ";
    temp->right = binaryTree();

    return temp;
}

void printTree_level_wise(Node* root){

    if(!root) return;

    queue<Node*> q;
    q.push(root);

    // start popping
    while(!q.empty()){
        int sz = q.size();

        while(sz--){
            Node* temp = q.front();
            q.pop();

            cout<<temp->data<<" ";

            if(temp->left){
                q.push(temp->left);
            }

            if(temp->right){
                q.push(temp->right);
            }
        }
        cout<<endl;
    }
}

int main() {

    // create tree level - order wise
    // Node* root = create_tree_level_wise();

    // create tree recursively
    Node* root = binaryTree();

    // print tree level wise
    printTree_level_wise(root);


    return 0;
}