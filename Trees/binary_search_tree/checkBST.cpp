#include <bits/stdc++.h>
using namespace std;

// approach 1 - inOrder traversal of a BST is always in sorted order.

/*
    void inOrder(TreeNode* root , vector<int>& ans){
        
        if(root == NULL) return;

        inOrder(root -> left , ans);
        ans.emplace_back(root -> val);
        inOrder(root -> right , ans);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inOrder(root , ans);
        int n = ans.size();

        for(int i = 1 ; i < n ; i++){
            if(ans[i] <= ans[i-1]) return false;
        }

        return true;
    }

    */
int main() {

    return 0;
}