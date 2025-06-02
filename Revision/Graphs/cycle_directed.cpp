#include <bits/stdc++.h>
using namespace std;


// function to detect cycle in directed graph using DFS.
bool DetectCycle(int node , vector<vector<int>>& adj , vector<bool>& path , vector<bool>& visited){
    
    // step1 - mark the visited node and path
    path[node] = 1;
    visited[node] = 1;

    // step2 - traverse all neighbours
    for(int i = 0; i < adj[node].size(); i++){
        
        // if neighbour is already present in path -> cycle detected
        if(path[adj[node][i]]) return 1;

        // optimising - if a path is already visited and no cycle is found , then no need to visit that path again
        if(visited[adj[node][i]]) continue;

        // make recursive calls and check for other paths
        if(DetectCycle(adj[node][i] , adj , path , visited)) return 1;
    }

    path[node] = 0;
    return 0;

}
int main() {
    return 0;
}