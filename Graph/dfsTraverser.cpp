//DFS traversal
void dfs(int node,unordered_map<int,bool>& visited,unordered_map<int,list<int>>& adj, vector<int> &component){
    // store in ans
    component.push_back(node);
    // mark visited
    visited[node]=true;
    //Call for the every connected node
    for(auto i: adj[node]){
        dfs(ii,visited,adj,component);
    }
}

vector<vector<int>>depthFirstSearch(int v, int E, vector<vector<int>> &edge){
    // Prepare adjlist
    unordered_map<int,list<int>>adj;
    for(int i=0; i<edge.size();i++){
        int u=edges[i][0];
        int v=edges[i][1];

        adj[u].push_back(v);
        adj[v].push_back(u);

    }
    vector<vector<int>>ans;
    unordered_map<int,bool>visited;
    // for all node calls if DFS is not visited
    for(int i=0;i<v;i++){
        if(!visited[i]){
            vector<int>component;
            dfs(i,visited,adjList,component);
            ans.push_back(component);
        }
    }
}
