#include <bits/stdc++.h>
using namespace std;

// Topo Sort
// to apply this graph must be a DAG.

void topoSortDFS(int node , vector<vector<int>>& adj , vector<bool>& visited , stack<int>& s){

    // mark the visited node
    visited[node] = 1;

    // traverse all the neighbours and make DFS call for unvisited neighbours. 
    for(int j = 0 ; j < adj[node].size() ; j++){
        if(!visited[adj[node][j]]){
            topoSortDFS(adj[node][j] , adj,visited,s);
        }
    }

    // push on stack while backtracking
    s.push(node);
}


int main() {

    vector<vector<int>> adj = {{1 , 2} , {3 , 4},{},{4},{},{4,6},{3}};

    vector<bool> visited(adj.size() , 0);
    stack<int> s;

    // make function call for all unvisited nodes
    for(int i = 0; i < visited.size() ; i++){
        if(!visited[i]) topoSortDFS(i,adj,visited,s);
    }

    // print answer

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }

    return 0;
}