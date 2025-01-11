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

// iterative preOrder traversal
vector<int> preOrderTraversal(Node* root){  // NLR
    if(root == NULL) return {};

    vector<int> ans;

    // take a stack to store nodes
    stack<Node*> st;
    st.push(root);

    while(!st.empty()){
        // pop st.top()
        root = st.top();
        st.pop();
        ans.push_back(root -> data);

        // first push right child into the stack and then left child

        if(root -> right != NULL) st.push(root -> right);
        if(root -> left != NULL) st.push(root -> left);
    }
    return ans;
}

// iterative inOrder traversal
vector<int> inOrder(Node* root){
    if(root == NULL) return {};

    
}


int main()
{

    return 0;
}