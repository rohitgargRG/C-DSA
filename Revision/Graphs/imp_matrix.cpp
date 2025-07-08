#include <bits/stdc++.h>
using namespace std;

// graph implementaion using adjacency matrix

void print(vector<vector<int>>& adj){
    int n = adj.size();

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
int main() {

    int vertex , edges;
    cin>>vertex>>edges;

    // adjacency matrix
    vector<vector<int>> adj(vertex , vector<int>(vertex , 0));


    // case 1 - undireted unweighted graph

    /*
    int u,v;
    for(int i = 0; i < edges; i++){
        cin>>u>>v;

        adj[u][v] = 1;
        adj[v][u] = 1;
    }

    print(adj);
    */

    // case 2 - for undirected weighted graph
    /*
    int u,v,w;

    for(int i = 0; i < edges; i++){
        cin>>u>>v>>w;

        adj[u][v] = w;
        adj[v][u] = w;
    }

    print(adj);
    */

    // case 3 - for directed unweighted graph

    int u,v;
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adj[u][v] = 1;
    }

    print(adj);

    return 0;
}