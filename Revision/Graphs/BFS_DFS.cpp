#include <bits/stdc++.h>
using namespace std;

vector<int> BFS(vector<vector<int>>& adj){
    int vertex = adj.size();

    // step 1 - create a queue and visited array.
    queue<int> q;
    vector<bool> visited(vertex , 0);

    // step 2 - mark the starting node as visited and push into q.
    visited[0] = 1;
    q.push(0);

    vector<int> ans;

    // step 3 - start popping from the queue until q becomes empty()
    int node;
    while(!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node);

        // for every popped node , see its unvisited neighbours.
        for(int i = 0; i < adj[node].size() ; i++){
            if(!visited[adj[node][i]]){
                // mark unvisited neighbours as visited and push into q.
                visited[adj[node][i]] = 1;
                q.push(adj[node][i]);
            }
        }
    }
    return ans;
}


int main() {
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>> adj(vertex+1);

    int u,v;
    
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> bfs = BFS(adj);

    for(int i=  0; i < bfs.size() ; i++){
        cout<<bfs[i]<<" ";
    }
    return 0;
}