#include <bits/stdc++.h>
using namespace std;

vector<int> DFS(int start , vector<vector<int>>& adj , vector<int>& ans , vector<bool>& visited){
    // step1 - create a stack
    stack<int> st;

    // step2 - push the start node into the stack
    st.push(start);
    visited[start] = 1;

    int node;
    while(!st.empty()){
        node = st.top();
        st.pop();
        ans.push_back(node);

        for(int i = 0 ; i < adj[node].size() ; i++){
            if(!visited[adj[node][i]]){
                visited[adj[node][i]] = 1;
                st.push(adj[node][i]);
            }
        }
    }

    return ans;
}

int main() {
    return 0;
}