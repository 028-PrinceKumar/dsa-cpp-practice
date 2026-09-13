// Problem:Cycle detection Directed Graph using BFS
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(n+e)
// Space Complexity: O(n)

#include <iostream>
#include<list>
#include<queue>
#include<unordered_map>
using namespace std;

int detectedCycleDirectedeGraph(int n, vector<pair<int,int>>& edges){
    // create adj list
    unordered_map<int, list<int>>adj;
    for(int i=0; i<edges.size(); i++){
        int u=edges[i].first-1;
        int v=edges[i].second-1;
        adj[u].push_back(v);
    }
    // find all indegrees
    vector<int>indegree(n);
    for(auto i:adj){
        for(auto j: i.second){
            indegree[j]++;
        }
    }
    // push the indegree 0
    queue<int>q;
    for(int i=0;i<n;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    // do bfs
    int cnt=0;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        //inc count
        cnt++;
        // neighbour indegree update
        for(auto neighbour: adj[front]){
            indegree[neighbour]--;
            if(indegree[neighbour]==0){
                q.push(neighbour);
            }
        }
    }
    if(cnt==n){
        return false;
    }
    else{
        return true;
    }
}

int main() {
    int n=5;
    vector<pair<int, int>>edges={
        {1,2},
        {4,1},
        {2,4},
        {3,4},
        {5,2},
        {1,3}
    };
    bool ans=detectedCycleDirectedeGraph(n,edges);
    cout<<ans<<endl;
    
    return 0;
}
