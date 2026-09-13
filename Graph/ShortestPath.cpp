// Problem: Shortest path in unidirected Graph
// Difficulty: Medium
// Approach:Topological sort + Kahn's Algo
// Time Complexity: O(n+e)
// Space Complexity: O(n+e)

#include <iostream>
#include<vector>
#include<unordered_map>
#include<list>
#include<algorithm>
#include<queue>

using namespace std;
// n:Source, t: destination, n: no of node: v: no of edges
vector<int> shortestPath(vector<pair<int,int>>edges,int n, int m, int s, int t){
    // create adjacency list
    unordered_map<int,list<int>>adj;
    for(int i=0; i<edges.size();i++){
        int u=edges[i].first;
        int v=edges[i].second;

        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    // do bfs
    unordered_map<int,bool>visited;
    unordered_map<int,int>parent;
    queue<int>q;
    q.push(s);
    parent[s]=-1;
    visited[s]=true;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(auto i: adj[front]){
            if(!visited[i]){
                visited[i]=true;
                parent[i]=front;
                q.push(i);
            }
        }
    }
    // Prepare shortest path
    vector<int>ans;
    int currentNode=t;
    ans.push_back(t);

    while(currentNode !=s){
        currentNode=parent[currentNode];
        ans.push_back(currentNode);
    }
    reverse(ans.begin(),ans.end());
    return ans;

}
int main() {
    int n=4, m=4, s=1, t=4;
    vector<pair<int,int>>edges={
        {1,2},
        {2,3},
        {3,4},
        {1,3}
    };
    vector<int>ans=shortestPath(edges,n,m,s,t);
    for(auto val: ans){
        cout<<val<<" ";
    }
    
    return 0;
}
