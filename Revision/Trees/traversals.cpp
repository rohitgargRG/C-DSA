#include <bits/stdc++.h>
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

// create bianry tree
Node* BinaryTree(){
   int x;
   cin>>x;

   if(x == -1) return NULL;

   Node* temp = new Node(x);
   cout<<"enter left child of "<<x<<endl;
   temp -> left = BinaryTree();

   cout<<"enter right child of "<<x<<endl;
   temp -> right = BinaryTree();

   return temp;
}

// recursive code - 

// preOrder - NLR
void preOrder(Node* root){
    // base case
    if(root == NULL) return;

    cout<<root -> data<<" ";
    preOrder(root->left);
    preOrder(root -> right);

}

// inOrder - LNR
void inOrder(Node* root){
    // base case
    if(root == NULL) return;

    inOrder(root -> left);
    cout<<root->data<<endl;
    inOrder(root -> right);
}

// postOrder - LRN
void postOrder(Node* root){
    // base case
    if(root == NULL) return;

    postOrder(root -> left);
    postOrder(root -> right);
    cout<<root->data<<endl;
}


// iterative approach - we will use a stack

// NLR
vector<int> preOrder_iterative(Node* root){
    vector<int> ans;
    if(root == NULL) return ans;

    //step 1 - use a stack to store  nodes
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* temp = st.top();
        st.pop();

        // N
        ans.push_back(temp -> data);

        // we want first left and then right
        // so push right first then left , since we are using a stack.

        if(root -> right) st.push(temp->left);
        if(root -> left) st.push(temp->right);
    }
    return ans;
}

// LNR
vector<int> inOrder_iterative(Node* root){
    vector<int> ans;
    if(!root) return ans;

    stack<Node*> st;

    while(!st.empty() || root != NULL){
        // L
        while(root != NULL){
            st.push(root);
            root = root -> left;
        }

        root = st.top();
        st.pop();

        // N
        ans.push_back(root->data);

        // R
        root = root -> right;
    }

    return ans;
}

// postorder - LRN

// logic -> find NRL and reverse the answer.
vector<int> postOrder_iterative(Node* root){
    vector<int> ans;
    if(!root) return ans;

    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        Node* temp = st.top();
        st.pop();

        // N
        ans.push_back(temp->data);

        if(root -> left) st.push(temp->left);
        if(root -> right) st.push(temp->right);
    }

    reverse(ans.begin(),ans.end());
    return ans;
}

// level order traversal


int main() {
    return 0;
}