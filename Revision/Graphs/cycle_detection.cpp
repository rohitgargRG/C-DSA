#include <bits/stdc++.h>
using namespace std;


// cycle detection using DFS
bool detect_cycleDFS(int node ,int parent, vector<vector<int>>& adj, vector<bool>& visited){
    visited[node] = 1;

    for(int i = 0; i < adj[node].size();i++){
        // case1 - ignore parent case
        if(adj[node][i] == parent) continue;

        // case2 - if node is already visited , cycle detected
        if(visited[adj[node][i]]) return 1;

        // make recursive calls for other nodes
        if(detect_cycleDFS(adj[node][i] , node , adj , visited)) return 1;
    }

    return 0;
}

// cycle detection using BFS
bool detect_cycleBFS(int start , vector<vector<int>>& adj, vector<bool>& visited){
    queue<int> q;
    q.push(start);
    visited[start] = 1;

    int node;
    int parent = -1;
    while(!q.empty()){
        node = q.front();
        q.pop();
        
        // visiting neighbours
        for(int i = 0; i < adj[node].size() ; i++){
            // case 1 - ignore parent
            if(parent == adj[node][i]) continue;

            // case 2 - if neigbour already visisted -> cycle detected
            if(visited[adj[node][i]]) return 1;

            if(!visited[adj[node][i]]){
                parent = node;
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return 0;
}

// another approah -> to store a pair of node,parent
bool detect_cycleBFS2(int start , vector<vector<int>>& adj, vector<bool>& visited){
    queue<pair<int,int>> q;    // {node , parent}
    q.push({start , -1});
    visited[start] = 1;

    int node,parent;
    while(!q.empty()){
        node = q.front().first;
        parent = q.front().second;
        q.pop();

        // visit neighbours
        for(int i = 0; i < adj[node].size() ; i++){
            // ignore parent case
            if(parent == adj[node][i]) continue;

            // alrady visited -> cycle detected
            if(visited[adj[node][i]]) return 1;

            visited[adj[node][i]] = 1;
            q.push({adj[node][i] , node});
        }
    }
    return 0;
}


int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>> adj(vertex+1);

    int u,v;
    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<bool> visited(adj.size() , 0);

    // for disconnected graph
    bool flag = true;
    for(int i = 0; i < visited.size() ; i++){
        if(!visited[i] && detect_cycleBFS(i,adj,visited)){
            cout<<"yes"<<endl;
            flag = false;
            break;
        } 
    }

    if(flag)cout<<"NO"<<endl;
    return 0;
}


