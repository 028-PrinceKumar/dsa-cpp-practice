// Problem: Minimum no of coins
// Difficulty: Medium
// Approach:Tabulation methods
// Time Complexity: O(n*x)
// Space Complexity: O(x)

// 
// Use Tebulation Methods

int solveTab(vector<int>& num,int x){
    vector<int>dp(x+1,INT_MAX);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        // i m trying to solve for every amount figure from 1 to x
        for(int j=0;j<num.size();j++){
            if(i-num[j]>=0 && dp[i-num[j]] != INT_MAX){
                dp[i]=min(dp[i],1+dp[i-num[j]]);
            }
        }
    }
    if(dp[x]==INT_MAX){
        return -1;
    }
    return dp[x];
}
int minimumElements(vector<int>&num,int x){
    vector<int>dp(x+1,-1);
    int ans=solveTab(num,x);
    return ans;
    
}

