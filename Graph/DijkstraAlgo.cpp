// Problem:Dijkstra's Shortest Path
// Difficulty: Medium
// Time Complexity: O(e.log(v))
// Space Complexity: O(n+e)
//e:edge
//v:vertex

#include <iostream>
#include<vector>
#include<set>
#include<unordered_map>
#include<list>
#include <climits>

using namespace std;

vector<int>dijkstra(vector<vector<int>>& vec, int vertices,int edges,int source){
    // create adjacency list
    unordered_map<int,list<pair<int,int>>>adj;
    for(int i=0; i<edges;i++){
        int u=vec[i][0];
        int v=vec[i][1];
        int w=vec[i][2];

        adj[u].push_back(make_pair(v,w));
        adj[v].push_back(make_pair(u,w));
    }
    vector<int>dist(vertices);
    for(int i=0; i<vertices;i++){
        dist[i]=INT_MAX;
    }
    set<pair<int,int>>st;
    dist[source]=0;
    st.insert(make_pair(0,source));
    while(!st.empty()){
        // fetch top record
        auto top=*(st.begin());
        int nodeDistance=top.first;
        int topNode=top.second;

        // remove top record now
        st.erase(st.begin());

        // traverse on neighbours
        for(auto neighbour:adj[topNode]){
            if(nodeDistance+neighbour.second<dist[neighbour.first]){
                auto record= st.find(make_pair(dist[neighbour.first],neighbour.first));
                // if record found, then erase it
                if(record != st.end()){
                    st.erase(record);
                }
            
            //distance update
            dist[neighbour.first]=nodeDistance+neighbour.second;
            // record push in set
            st.insert(make_pair(dist[neighbour.first],neighbour.first));
            }
        }
    }
    return dist;

}

int main() {
    int vertices=4,edges=5,source=0;
    vector<vector<int>>vec={
        {0,1,5},
        {0,2,8},
        {1,2,9},
        {1,3,2},
        {2,3,6}
};
vector<int>ans=dijkstra(vec,vertices,edges,source);
for(auto val:ans){
    cout<<val<<" ";

}
    
    return 0;
}
