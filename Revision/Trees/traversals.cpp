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

// function to create a BT
Node* createBT(){
    int x;
    cin>>x;

    if(x == -1) return NULL;

    Node* temp = new Node(x);
    cout<<"enter left child of "<<temp->data<<endl;
    temp->left = createBT();
    cout<<"enter right child of "<<temp->data<<endl;
    temp->right = createBT();

    return temp;
}

// Traversals

// recursive codes
// TC - O(n) , S - O(h)

// preOrder traversal -> NLR
void preOrder(Node* root){
    // base case
    if(!root) return;

    // N
    cout<<root->data<<" ";
    // L
    preOrder(root->left);
    // R
    preOrder(root->right);
}

// inOrder traversal -> LNR
void inOrder(Node* root){
    // base case
    if(!root) return;

    // L
    inOrder(root->left);
    // N
    cout<<root->data<<" ";
    // R
    inOrder(root->right);
}

// posOrder traversal -> LRN
void postOrder(Node* root){
    // base case
    if(!root) return;

    // L
    postOrder(root->left);
    // R
    postOrder(root->right);
    // N
    cout<<root->data<<" ";
}

// iterative codes

// preOrder - NLR
vector<int> preOrder_iterative(Node* root){
    if(root == NULL) return {};
    
    // create a stack of Node* type
    stack<Node*> st;
    vector<int> preOrder;
    st.push(root);

    // start popping from stack
    while(!st.empty()){
        root = st.top();
        st.pop();

        // N -> store into answer
        preOrder.push_back(root->data);

        // push right child then left child
        // so that , the left child can be processed before the right child
        // since top of stack will have left child
        if(root -> right) st.push(root->right);
        if(root -> left) st.push(root->left);
    }

    return preOrder;
}

// inorder iterative -> LNR
vector<int> inOrder_iterative(Node* root){
    if(!root) return {};

    // create a stack
    stack<Node*> st;
    vector<int> inOrder;

    while(!st.empty() || root != NULL){

        // L -> left -> push left nodes
        while(root){
            st.push(root);
            root = root->left;
        }

        // N -> store into answer
        root = st.top();
        st.pop();
        inOrder.push_back(root->data);

        // R -> go right
        root = root->right;
    }

    return inOrder;
}

// postOrder_iterative -> LRN
// logic -> find NRL
// then, reverse the answer
vector<int> postOrder_iterative(Node* root){
    if(!root) return {};

    // find NRL

    // create a stack
    stack<Node*> st;
    vector<int> postOrder;
    st.push(root);

    while(!st.empty()){

        // N -> store into answer
        root = st.top();
        st.pop();
        postOrder.push_back(root->data);

        // push left first then right
        if(root->left) st.push(root->left);
        if(root->right) st.push(root->right);
    }

    // reverse the answer and return
    reverse(postOrder.begin() , postOrder.end());

    return postOrder;
}

// print 
void print(vector<int>& arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main() {

    // create a BT
    Node* root = createBT();

    /* recursive 
    // preorder
    preOrder(root);
    cout<<endl;

    // inorder
    inOrder(root);
    cout<<endl;

    // postOrder
    postOrder(root);
    */

    // iterative

    vector<int> pre = preOrder_iterative(root);
    print(pre);

    vector<int> in = inOrder_iterative(root);
    print(in);

    vector<int> post = postOrder_iterative(root);
    print(post);

    return 0;
}