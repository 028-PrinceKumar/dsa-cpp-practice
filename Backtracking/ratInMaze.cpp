// Problem:Rat in maze
// Platform: Code Studio
// Link: https:https:https://www.naukri.com/code360/problems/rat-in-a-maze
// Difficulty: Hard
// Approach: Backtracking
// Time Complexity: O(n! × n)
// Space Complexity: O(n²)

bool isSafe(int newx, int newy, vector<vector<bool>>&vis,vector<vector<int>>&arr,int n){
    if((newx>=0 && newx<n)&&(newy>=0  && newy<n)&&(vis[newx][newy]!=1)&&(arr[newx][newy]==1)){
        return true;
    }
    else{
        return false;
    }
}

void solve(int x,int y,vector<vector<int>>& arr,int n,vector<string>& ans,vector<vector<bool>>&visited,string path){
    //base case
    if(x==n-1 && y==n-1){
        ans.push_back(path);
        return;
    }
    // Four Movement D , L, R, U
    // Down
    visited[x][y]=1;
    if(isSafe(x+1,y,visited,arr,n)){
        
        solve(x+1,y,arr,n,ans,visited,path+'D');
        
    }
    // Left
    if(isSafe(x,y-1,visited,arr,n)){
        
        solve(x,y-1,arr,n,ans,visited,path+'L');
        
    }

    // Right
    if(isSafe(x,y+1,visited,arr,n)){
        
        solve(x,y+1,arr,n,ans,visited,path+'R');
        
    }

    // Up
    if(isSafe(x-1,y,visited,arr,n)){
        
        solve(x-1,y,arr,n,ans,visited,path+'U');
        
    }
    visited[x][y]=0;


}

vector<string>searchMaze(vector<vector<int>>&arr,int n){
    vector <string>ans;
    vector<vector<bool>>visited(n,vector<bool>(n,0));
    string path="";
    // check that , if [0][0] element have 0 then dont need to check all simple dont return nothing
    if(arr[0][0]==0){
        return ans;
    }

    solve(0, 0, arr, n, ans, visited, path);
        return ans;
    
}

