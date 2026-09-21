// Bellman' Ford for find the shortest distance from source to destination in graph

// n:no of node
// m:no of edges
// src: source node
// dest: destination node
#include <iostream>
#include<vector>
#include<unordered_map>
#include<climits>
using namespace std;

int bellmanFord(int n,int m, int src, int dest, vector<vector<int>>& edges){
    vector<int>dist(n+1,1e9);
        dist[src]=0;
        for(int i=1; i<=n;i++){
            // traversal on edge list
            for(int j=0; j<m; j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int wt=edges[j][2];

                if(dist[u]!=1e9 && ((dist[u]+wt)<dist[v])){
                    dist[v]=dist[u]+wt;
                }
            }
        }
        // check for negative cycle
        bool flag=0;
        for(int j=0; j<m; j++){
                int u=edges[j][0];
                int v=edges[j][1];
                int wt=edges[j][2];

                if(dist[u]!=1e9 && ((dist[u]+wt)<dist[v])){
                    flag=1;
                }
        }

        if(flag==0){
            return dist[dest];
        }
        return -1;

    
}

int main() {

    int n = 5;
    int m = 7;

    int src = 1;
    int dest = 5;

    vector<vector<int>> edges = {
        {1, 2, 6},
        {1, 3, 7},
        {2, 3, 8},
        {2, 4, 5},
        {2, 5, -4},
        {3, 4, -3},
        {4, 5, 9}
    };

    int ans = bellmanFord(n, m, src, dest, edges);

    cout << "Shortest distance: " << ans << endl;// ans:13

    return 0;
}
