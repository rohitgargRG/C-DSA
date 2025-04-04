#include <bits/stdc++.h>
using namespace std;


// function to detect cycle in a graph using DFS
// algorithm - 
// 1) start DFS
// 2) if a node is visited again , then cycle detected.
// 3) do not consider parent node case.****

bool detectCycleDFS(int node , int parent , vector<vector<int>>& adj , vector<bool>& visited){
    // step1 - mark the current node visited.
    visited[node] = 1;

    // step2 - for the current node visit all its neigbours
    for(int i = 0; i < adj[node].size() ; i++){

        // if the neighbour is parent node , then ignore that case.
        if(adj[node][i] == parent) continue;

        // if the neighbour is already visited -> cycle detected
        if(visited[adj[node][i]] == 1) return 1;

        // make the recursive call
        if(detectCycleDFS(adj[node][i] , node , adj , visited)){
            return 1;
        }
    }

    return 0;
}

// cycle detection using BFS
bool detectCycleBFS(int node , vector<vector<int>>& adj , vector<bool>& visited){
    
    queue<pair<int,int>> q;
    // {node,parent}
    q.push({node , -1});

    visited[node] = 1;
    int v , parent;

    while(!q.empty()){
        v = q.front().first;
        parent = q.front().second;
        q.pop();

        // visit all neighbours of current node and check
        for(int i = 0; i < adj[v].size() ; i++){
            // ignore parent
            if(adj[v][i] == parent) continue;

            // if already visited -> cycle detected
            if(visited[adj[v][i]]) return 1;

            visited[adj[v][i]] = 1;
            q.push({adj[v][i] , v});
        }
        
    }
    return 0;
}

int main() {

    vector<vector<int>> adj = {{1} , {0,6,2},{1,3},{2,4,5},{3},{3},{1}};

    vector<bool> visited(adj.size() , 0);

    // // for non-connected graph , visit all non-connected nodes
    // bool flag = false;
    // for(int i = 0 ; i < visited.size() ; i++){
    //     if(!visited[i] && detectCycleDFS(i,-1,adj,visited)){
    //         flag = true;
    //         break;
    //     }
    // }

    // for non-connected graph , visit all non-connected nodes
    bool flag = false;
    for(int i = 0 ; i < visited.size() ; i++){
        if(!visited[i] && detectCycleBFS(i,adj,visited)){
            flag = true;
            break;
        }
    }

    if(flag) cout<<"cycle detected"<<endl;
    else cout<<"no cycle detected"<<endl;

    return 0;
}