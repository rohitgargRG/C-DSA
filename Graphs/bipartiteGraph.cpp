#include <bits/stdc++.h>
using namespace std;

// 2 - coloring algorithm using BFS
bool isbipartite(vector<vector<int>>& adj){
    int v = adj.size();

    queue<int> q;
    vector<int> color(v,-1);

    // for disconnected components

    for(int i = 0; i < v ; i++){

        if(color[i] == -1){
            q.push(i);
            color[i] = 0;
            // red -> 0 , blue -> 1

            int node;
            while(!q.empty()){
                node = q.front();
                q.pop();

                // visit all neighbours
                for(int i = 0; i < adj[node].size() ; i++){
                    int neib = adj[node][i];

                    // node and neighbour has same color
                    if(color[neib] == color[node]) return false;

                    // not colored
                    if(color[neib] == -1){
                        color[neib] = !(color[node]);
                        q.push(neib);
                    }
                }
            }

        }
       
    }
    

    return true;
}

// 2-coloring algorithm using DFS
bool DFS_algo(int node ,  vector<vector<int>>& adj , vector<int>& color){

    // visit all neighbours of node
    for(int i = 0; i < adj[node].size() ; i++){
        int neib = adj[node][i];

        // neib not colored
        if(color[neib] == -1){
            color[neib] = !(color[node]);

            // make DFS calls
            if(!DFS_algo(neib , adj, color)) return 0;
        }
        else{
            if(color[neib] == color[node]) return 0;
        }
    }

    return 1;
}

int main() {

    // create adjacency list -> undirected graph
    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>> adj(vertex);
    int u,v;
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    cout<<isbipartite(adj)<<endl;

    vector<int> color(v,-1);
    cout<<DFS_algo(0,adj,color);
    return 0;
}