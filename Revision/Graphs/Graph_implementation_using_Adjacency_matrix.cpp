#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    // adjacency matrix
    vector<vector<bool>> adjacency(vertex , vector<bool>(vertex , 0));

    // case 1 - undirected unweighted graph


    /*
    int u,v;
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adjacency[u][v] = 1;
        adjacency[v][u] = 1;
    }
    */

    // case 2 - directed unweighted graph

    /*
    int u,v;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adjacency[u][v] = 1;
    }
    */

    

    vector<vector<int>> adj(vertex , vector<int>(vertex,0));
    

    // case 3 - undirected weighted graph

    /*
    int u,v,weight;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v>>weight;
        adj[u][v] = weight;
        adj[v][u] = weight;
    }
     */

    // case 4 - directed weighted graph

    int u,v,weight;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v>>weight;
        adj[u][v] = weight;
    }



    // print()
    for(int i = 0; i < vertex; i++){
        for(int j = 0; j < vertex; j++){
            cout<<adj[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}