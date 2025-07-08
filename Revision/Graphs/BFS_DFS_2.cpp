#include <bits/stdc++.h>
using namespace std;

// BFS DFS revision
// TC - O(V+E) , SC - O(V)

// BFS
vector<int> bfs(vector<vector<int>> &adj) {
        // Code here
        
        // take a queue and a visited array
        queue<int> q;
        vector<int> visited(adj.size() , 0);
        
        // start with 0
        q.push(0);
        visited[0] = 1;
        vector<int> ans;
        
        while(!q.empty()){
            int node = q.front();
            q.pop();
            ans.push_back(node);
            
            // visit all its unvisited neighbours and mark them visited
            for(int i = 0 ; i < adj[node].size() ; i++){
                if(!visited[adj[node][i]]){
                    q.push(adj[node][i]);
                    visited[adj[node][i]] = 1;
                }
            }
        }
        
    return ans;
}

// DFS
 void DFS(int node , vector<vector<int>>& adj , vector<int>& ans , vector<bool>& visited){
        
        // mark visited and store in answer
        visited[node] = 1;
        ans.push_back(node);
        
        // visit all it's unvisited neighbours
        for(int j = 0; j < adj[node].size() ; j++){
            // for all unvisited neighbours make a DFS call
            if(!visited[adj[node][j]]){
                DFS(adj[node][j] , adj , ans , visited);
            }
        }
    
    }
    
    vector<int> dfs(vector<vector<int>>& adj) {
        // Code here
        vector<bool> visited(adj.size() , 0);
        vector<int> ans;
        DFS(0 , adj , ans , visited);
        
        return ans;
    }

int main() {
    return 0;
}