#include <bits/stdc++.h>
using namespace std;

// implementation of Graph using adjacency list    
void print(vector<vector<int>> adj){
    int n = adj.size();

    for(int i = 0; i < n; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < adj[i].size(); j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    
    // vector<vector<int>> adj(vertex);

    // vector<int> adj[vertex];

    // case 1 - undirected unweighted graph

    /*
    int u,v;
    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    print(adj);
    */

    // case 2 - directed unweighted graph
    /*
    int u,v;
    for(int i = 0 ; i < edges ; i++){
        cin>>u>>v;
        adj[u].push_back(v);
    }

    print(adj);
    */

    // case 3 - undirected weighted graph
    vector<vector<pair<int,int>>> adj(vertex);

    /*
    int u,v,w;
    for(int i = 0; i < edges; i++){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
        adj[v].push_back({u,w});
    }
    */

    int u,v,w;
    for(int i = 0; i < edges; i ++){
        cin>>u>>v>>w;
        adj[u].push_back({v,w});
    }

    for(int i = 0 ; i < vertex ; i++){
        cout<<i<<" -> ";
        for(int j = 0 ; j < adj[i].size() ; j++){
            cout<<"{"<<adj[i][j].first<<","<<adj[i][j].second<<"}"<<" ";
        }
        cout<<endl;
    }





    return 0;
}