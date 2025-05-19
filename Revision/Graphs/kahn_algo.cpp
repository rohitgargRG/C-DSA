#include <bits/stdc++.h>
using namespace std;

// topo sort using BFS
void kahn_algorithm(vector<vector<int>>& adj , vector<int>& ans){
    
    // step 1 - find indegree of all nodes
    int v = adj.size();
    vector<int> inDegree(v,0);

    for(int i = 0; i < v ; i++){
        for(int j = 0 ; j < adj[i].size(); j++){
            inDegree[adj[i][j]]++;
        }
    }

    // step 2 - push all nodes with 0 indegree into queue
    queue<int> q;

    for(int i = 0; i < v ; i++){
        if(!inDegree[i]) q.push(i);
    }

    // step 3 - start popping from queue
    int node;
    while(!q.empty()){
        node = q.front();
        q.pop();
        ans.push_back(node);

        // for every popped node , decrease the inDegree of the nodes to which it is pointing by 1.
        for(int j = 0 ; j < adj[node].size(); j++){
            inDegree[adj[node][j]]--;
            if(!inDegree[adj[node][j]]){
                // if inDegree became 0 , then push that element into q.
                q.push(adj[node][j]);
            }
        }
    }
}

int main() {

    int vertex,edges;
    cin>>vertex>>edges;

    vector<vector<int>> adj(vertex);

    int u,v;
    for(int i = 0; i < edges ; i++){
        cin>>u>>v;
        adj[u].push_back(v);   // DAG
    }

    vector<int> ans;

    kahn_algorithm(adj,ans);

    for(int i = 0 ; i < ans.size(); i++){
        cout<<ans[i]<<" ";
    }


    return 0;
}

