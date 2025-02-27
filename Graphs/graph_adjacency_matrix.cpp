#include <bits/stdc++.h>
using namespace std;

// graph implementation using adjacency matrix


int main() {

    int vertex , edges;
    cin>>vertex>>edges;

    // undirected unweighted graph

    /*
    
    // creating a 2d matrix
    vector<vector<bool>> AdjMat(vertex , vector<bool>(vertex,0));

    int u,v;
    // take edges input
    for(int i = 0; i <edges ; i++){
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
    }
    cout<<endl;

    // printing matrix

    for(int i = 0; i < vertex ; i++){
        for(int j = 0; j < vertex ; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    */


    // undirected weighted graph

    /*

    vector<vector<int>> AdjMat(vertex , vector<int>(vertex , 0));

    int u,v,weight;

    // take edges and weight input
    for(int i = 0; i < edges ; i++){
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
        AdjMat[v][u] = weight;
        
    }

    for(int i = 0; i < vertex ; i++){
        for(int j = 0; j < vertex ; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    */

    // directed unweighted graph

    /*

    vector<vector<bool>> AdjMat(vertex , vector<bool>(vertex , 0));

    int u,v;

    for(int i = 0; i < edges; i++){
        cin>>u>>v;
        AdjMat[u][v] = 1;
    }


    for(int i = 0; i < vertex ; i++){
        for(int j = 0; j < vertex ; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }

    */
    

    // directed weighted graph

    vector<vector<int>> AdjMat(vertex , vector<int>(vertex , 0));

    int u , v, weight;

    for(int i = 0; i < edges ;  i++){
        cin>>u>>v>>weight;
        AdjMat[u][v] = weight;
    }

    for(int i = 0; i < vertex ; i++){
        for(int j = 0; j < vertex ; j++){
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}