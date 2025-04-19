#include <bits/stdc++.h>
using namespace std;

// topo sort using DFS
void topo_DFS(int node , vector<vector<int>>& adj , vector<bool>& visited , stack<int>& s){
    // mark current node visited
    visited[node] = 1;
    
    // visit all unvisited neighbours
    for(int i = 0; i < adj[node].size(); i++){
        if(!visited[adj[node][i]]){
            topo_DFS(adj[node][i] , adj , visited , s);
        }
    }

    // push while returning
    s.push(node);
}
int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>> adj(vertex);

    int u,v;
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adj[u].push_back(v);   // DAG
    }

    vector<bool> visited(adj.size(),0);
    stack<int> s;

    // for all unvisited nodes
    for(int i = 0; i < visited.size() ; i++){
        if(!visited[i]) topo_DFS(i,adj,visited,s);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}