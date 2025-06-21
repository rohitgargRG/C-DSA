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

// function to create a binary tree
Node* createBT(){
    int x;
    cin>>x;

    // base case
    if(x == -1) return NULL;

    Node* temp = new Node(x);
    cout<<"enter left node of "<<temp->data<<endl;
    temp->left = createBT();
    cout<<"enter right node of "<<temp->data<<endl;
    temp->right = createBT();

    return temp;
}


int main() {

    // algorithm
    Node* root = createBT();

    // step 1 - create three lists
    vector<int> preOrder;
    vector<int> inOrder;
    vector<int> postOrder;

    // step 2 - create a stack
    stack<pair<Node* , int>> st;  // {Node , num} 

    // initially push root
    st.push({root , 1});

    // NOTE - everytime you push a node , it's initial num value will be 1
    while(!st.empty()){
        pair<Node*,int> temp = st.top();
        st.pop();

        // three cases
        if(temp.second == 1){
            // push node->data into preOrder
            preOrder.push_back((temp.first)->data);

            // increment num
            temp.second++;

            st.push(temp);


            // push left child of node into stack
            if((temp.first)->left){
                st.push({(temp.first)->left,1});
            }
        }
        else if(temp.second == 2){
            // push node->data into inOrder
            inOrder.push_back((temp.first)->data);

            // increment num
            temp.second++;

            st.push(temp);

            //push right child into stack
            if((temp.first)->right){
                st.push({(temp.first)->right , 1});
            }
        }
        else{
            // num == 3

            // push node->data into postOrder
            postOrder.push_back((temp.first)->data);
            
            // pop 
            
        }
    }

    // fianlly print

    for(int i = 0; i < preOrder.size() ; i++){
        cout<<preOrder[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < inOrder.size() ; i++){
        cout<<inOrder[i]<<" ";
    }
    cout<<endl;

    for(int i = 0; i < postOrder.size() ; i++){
        cout<<postOrder[i]<<" ";
    }
    
    return 0;
}