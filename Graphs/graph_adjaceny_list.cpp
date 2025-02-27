#include <bits/stdc++.h>
using namespace std;
// graph implementation using adjacency list

int main() {

    int vertex , edges;
    cin>>vertex>>edges;

    // undirected unweighted graph

    /*

    // array of vectors.

    vector<int> AdjList[vertex];

    int u,v;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
        AdjList[v].push_back(u);
    }


    // print the adj list
    for(int i = 0; i < vertex ; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < AdjList[i].size() ; j++){
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // undirected weighted graph

    /*
    vector<pair<int,int> > AdjList[vertex];

    int u,v,weight;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back({v,weight});
        AdjList[v].push_back({u,weight});
    }

    // print the list

    for(int i = 0; i < vertex ; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < AdjList[i].size() ;j++){
            cout<<AdjList[i][j].first<<" "<< AdjList[i][j].second<<" ";
        }
        cout<<endl;
    }

    */

    // directed unweighted graph

    /*

    vector<int> AdjList[vertex];

    int u,v;

    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        AdjList[u].push_back(v);
    }

    // print the adj list
    for(int i = 0; i < vertex ; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < AdjList[i].size() ; j++){
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }

    */

    // directed weighted graph

    vector<pair<int,int>> AdjList[vertex];

    int u,v,weight;

    for(int i = 0; i <edges ; i++){
        cin>>u>>v>>weight;
        AdjList[u].push_back({v,weight});
    }

    for(int i = 0; i < vertex ; i++){
        cout<<i<<" -> ";
        for(int j = 0; j < AdjList[i].size() ;j++){
            cout<<AdjList[i][j].first<<" "<< AdjList[i][j].second<<" ";
        }
        cout<<endl;
    }



    return 0;
}