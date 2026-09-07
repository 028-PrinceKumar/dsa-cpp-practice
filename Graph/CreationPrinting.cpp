 Creating and Printing of Adjancy list

#include <iostream>
#include<vector>
using namespace std;

vector<vector<int>>printAdjacency(int n, int m, vector<vector<int>>& edges){
    vector<int> ans[n];
    for(int i=0; i<m; i++){
        int u= edges[i][0];
        int v=edges[i][1];

        ans[u].push_back(v);
        ans[v].push_back(u);
    }
    vector<vector<int>>adj(n);
    //ans array will store all adjacent nodes correspondin on indexes
    for(int i=0;i<n;i++){
        adj[i].push_back(i);
        for(int j=0; j<ans[i].size();j++){
            adj[i].push_back(ans[i][j]);
        }
    }
    return adj;

}

int main() {

    // n : no of node 
    // m: np of column

    int n=5,m=6;
    vector<vector<int>>edges={
        {1,4},
        {0,2},
        {1,3},
        {1,2},
        {0,3},
        {0,1},
        {3,4}
    };
    vector<vector<int>>adj=printAdjacency(n,m,edges);

    for(auto i:adj){
           
            for(auto j:i){
                cout<<j<<" ,";
            }
            cout<<endl;
        }
    
    return 0;
}   
