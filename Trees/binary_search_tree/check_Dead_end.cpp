#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* left ; 
    Node* right;

    Node(int data){
        this -> data = data;
        this -> left = NULL;
        this -> right = NULL;                
    }
};
bool Dead(Node* root , int lower , int upper){
        // base case
        if(!root) return 0;
        
        // leaf node
        if(!root -> left && !root -> right){
            // check for dead end
            if((root -> data - lower == 1) && (upper - root -> data == 1)){
                return 1;
            }
            else{
                return 0;
            }
        }
        
        return Dead(root -> left , lower , root -> data) || Dead(root -> right , root -> data , upper);
    }
    bool isDeadEnd(Node *root)
    {
        //Your code here
        return Dead(root , 0 , INT_MAX);
    }
int main() {
    return 0;
}