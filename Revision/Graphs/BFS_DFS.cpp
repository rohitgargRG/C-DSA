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

// DFS recursive 
void DFS_recursive(int node , vector<vector<int>>& adj , vector<bool>& visited, vector<int>& ans){
    // mark current bode visited
    visited[node] = 1;
    ans.push_back(node);

    // for the current node , make recursive call for it's unvisited neighbours
    for(int j = 0; j < adj[node].size() ; j++){
        if(!visited[adj[node][j]]){
            DFS_recursive(adj[node][j] , adj , visited , ans);
        }
    }
}

// DFS iterative -> use a stack
void iterativeDFS(int start , vector<vector<int>>& adj , vector<bool>& visited){
    // create a stack and push current node
    stack<int> st;
    st.push(start);
    
    int node;
    while(!st.empty()){
        node = st.top();
        st.pop();

        if(!visited[node]){
            visited[node] = 1;
            cout<<node<<" ";

            // now push all the unvisited neighbours into stack
            // reverse : to mimic DFS order
            for(int j = adj[node].size()-1 ; j >= 0 ; j--){
                if(!visited[adj[node][j]]){
                    st.push(adj[node][j]);
                }
            }
        }
    }
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

    vector<bool> visited(vertex , 0);
    vector<int> ans;
    // DFS_recursive(0,adj,visited,ans);
    iterativeDFS(0,adj,visited);

    // for(int i=  0; i < ans.size() ; i++){
    //     cout<<ans[i]<<" ";
    // }s
    return 0;
}