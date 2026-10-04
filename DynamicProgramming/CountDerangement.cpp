// Problem: Count Derangement
// Difficulty: Hard
// Approach:Tabulation methods
// Time Complexity: O(n)
// Space Complexity: O(1)

int solveTab(int n){
    int prev2=0;
    int prev1=1;
    for(int i=3;i<=n;i++){
        int first=prev1%MOD;
        int second=prev2%MOD;
        int sum=(first+second)%MOD;
        int ans=((i-1)*sum)%MOD;
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}

int countDerangements(int n){
    vector<int> dp(n+1,-1);
    return solveTab(n);
}

