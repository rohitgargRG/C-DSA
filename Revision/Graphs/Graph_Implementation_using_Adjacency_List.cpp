#include <bits/stdc++.h>
using namespace std;

int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    // array of vectors
    vector<int> AdjList[vertex];

    // case1 - undirected unweighted graph

    /*
    int u,v;
    
    for(int i = 0 ; i < edges ; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }
     */

    // case2 - for directed unweighted Graph

    /*
    int u,v;

    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
    }
    */


    vector<pair<int,int>> adj[vertex];

    // case3 - for undirected weighted graph

    
    int u,v,weight;

    for(int i = 0; i < edges; i++){
        cin>>u>>v>>weight;
        adj[u].push_back({v,weight});
        adj[v].push_back({u,weight});
    }
    

    // case 4 - for directed weighted graph

    /*
    int u,v,weight;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v>>weight;
        adj[u].push_back({v,weight});
    }
    */



    // print()
    for(int i = 0; i < vertex ; i++){
        cout<<i;
        for(int j = 0 ; j < adj[i].size() ; j++){
            cout<<"-> {"<<adj[i][j].first<<":"<<adj[i][j].second<<"}"<<" ";
        }
        cout<<endl;
    }
    return 0;
}