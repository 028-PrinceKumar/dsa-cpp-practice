// Problem: Minimum Sideway Jump 
// Difficulty: Hard

int solve(vector<int>& obstacles,int currlane,int pos){
    // base case
    int n=obstacles.size()-1;
    if(pos==n){
        return 0;
    }
    if(obstacles[pos+1]!=currlane){
        return solve(obstacles,currlane,pos+1);
    }
    else{
        // sideways jump
        int ans=INT_MAX;
        for(int i=1; i<=3; i++){
            if(currlane !=i && obstacles[pos]!=i){
                ans=min(ans,1+solve(obstacles,i,pos));
            }
        }
        return ans;
    }
}

int minSideJumps(vector<int>& obstacles){
    return solve(obstacles,2,0);
}
