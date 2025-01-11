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
vector<int> preOrder_iterative(Node* root){
    vector<int> ans;

    if(root == NULL) return ans;

    // step 1 - create a stack
    stack<Node*> st;
    st.push(root);
    ans.emplace_back(root->data);

    // step 2 - start iterating
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.emplace_back(temp -> data);

        // first push right node and then left onto the stack , so that left node can be accessed before the right node.
        if(temp -> right) st.push(temp->right);
        if(temp -> left) st.push(temp -> left);
    }

    return ans;  
}

// InOrder - LNR
// logic - first time visit , push R,N,L   (when flag = 0)
//       - second time visit , direct print.   (when flag = 1)

vector<int> inOrder(Node* root){
    vector<int> ans;
    if(root == NULL) return ans;


    stack<Node*> st;
    stack<bool> visited;
    st.push(root);
    visited.push(0);

    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        bool flag = visited.top();
        visited.pop();

        if(!flag){  // flag = 0
            // push r,n,l
            
            if(temp -> right){
                st.push(temp -> right);
                visited.push(0);
            }

            st.push(temp);
            visited.push(1);

            if(temp -> left){
                st.push(temp -> left);
                visited.push(0);
            }
        }
        else{
            ans.emplace_back(temp -> data);
        }

    }
    return ans;  
}

// postOrder - LRN
// logic - find NRL and reverse the answer to get LRN.
vector<int> postOrder(Node* root){
    vector<int> ans;

    if(root == NULL) return ans;

    // step 1 - create a stack
    stack<Node*> st;
    st.push(root);
    ans.emplace_back(root->data);

    // step 2 - start iterating
    while(!st.empty()){
        Node* temp = st.top();
        st.pop();
        ans.emplace_back(temp -> data);

        // first push left node and then right onto the stack , so that right node can be accessed before the left node.
        
        if(temp -> left) st.push(temp -> left);
        if(temp -> right) st.push(temp->right);
    }

    reverse(ans.begin() , ans.end());
    return ans;  
   
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
    preOrder_iterative(root);
    cout<<endl;


    cout<<"inOrder : ";
    inOrder(root);
    cout<<endl;

    cout<<"postOrder : ";
    postOrder(root);

    return 0;
}