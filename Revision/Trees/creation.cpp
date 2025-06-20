#include <bits/stdc++.h>
using namespace std;

// Node structure
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

// NOTE - use a queue to create a TREE.


// function to create a tree using Level-wise technique
// -1 -> means no node
Node* create_binary_tree_level_wise(int x){

    // create root node and a queue
    Node* root = new Node(x);
    queue<Node*> q;
    q.push(root);

    // now start popping and take input left and right child
    while(!q.empty()){
        Node* temp = q.front();
        q.pop();

        // left child
        cout<<"Enter Left Child of Node : "<<temp->data<<endl;
        int l;
        cin>>l;

        // right child
        cout<<"Enter right child of Node : "<<temp->data<<endl;
        int r;
        cin>>r;

        // create left node and right node
        if(l != -1){
            temp -> left = new Node(l) ;
            q.push(temp->left);
        }

        if(r != -1){
            temp -> right = new Node(r);
            q.push(temp->right);
        }
    }

    return root;
}

// recursive method to create a binary tree
Node* binaryTree(){
    int x;
    cin>>x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);
    cout<<"Enter Left child of "<<temp->data<<endl;
    temp->left = binaryTree();
    cout<<"enter Right child of "<<temp->data<<endl;
    temp->right = binaryTree();

    return temp;
}

// print tree
void print_levelWise(Node* root){
   if(root == NULL){
    cout<<"empty tree"<<endl;
    return;
   }

   queue<Node*> q;
   q.push(root);
   int size;

   while(!q.empty()){
      size = q.size();
      
      while(size--){
            Node* temp = q.front();
            cout<<temp->data<<" ";
            q.pop();

            if(temp->left){
                q.push(temp->left);
            }
            if(temp -> right){
                q.push(temp->right);
            }
      }
      cout<<endl;
   }
}
int main() {

    // create binary tree using level-wise tehnique

    /*
    int x;
    cout<<"enter root  node : ";
    cin>>x;

    Node* root = create_binary_tree_level_wise(x);
    print_levelWise(root);
    */

    // create binary tree using recursive method
    Node* root = binaryTree();
    print_levelWise(root);
    return 0;
}