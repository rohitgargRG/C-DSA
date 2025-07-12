#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    void dfs_topo(int node , vector<vector<int>>& adj , vector<int>& visited, stack<int>& s){
        // mark visited
        visited[node] = 1;
        
        // visit all neighbours
        for(int i = 0; i < adj[node].size() ; i++){
            if(!visited[adj[node][i]]) dfs_topo(adj[node][i],adj,visited,s);
        }
        
        // push while returning
        s.push(node);
    }
    vector<int> topoSort(int V, vector<vector<int>>& edges) {
        // code here
        
        // step 1 - create adjacency list
        vector<vector<int>> adj(V);
        
        for(int i = 0; i < edges.size() ; i++){
            adj[edges[i][0]].push_back(edges[i][1]);
        }
        
        // step 2 - create a visited array and a stack
        vector<int> visited(V , 0);
        stack<int> s;
        
        // step 3 - for all unvisited nodes make a dfs call
        for(int i = 0; i < V;  i++){
            if(!visited[i]) dfs_topo(i,adj,visited,s);
        }
        
        // step 4 - return ans
        vector<int> ans;
        
        while(!s.empty()){
            ans.push_back(s.top());
            s.pop();
        }
        
        return ans;
    }
};

int main() {
    return 0;
}