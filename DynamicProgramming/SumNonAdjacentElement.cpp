// Problem: Minimum sum of non adjacent elements
// Difficulty: Medium
// Approach:Tabulation methods
// Time Complexity: O(n)
// Space Complexity: O(1)

int solve(vector<int>& nums,int n){
    // base case
    if(n<0){
        return 0;
    }
    if(n==0){
        return nums[0];
    }
    int incl=solve(nums,n-2)+nums[n];
    int excl=solve(nums,n-1)+0;

    return max(incl,excl);
}

int solveTab(vector<int>& nums){
    int n=nums.size();
    int prev2=0;
    int prev1=nums[0];
    for(int i=1; i<n; i++){
        int incl=prev2+nums[i];
        int excl=prev1+0;
        int ans=max(incl,excl);
        prev2=prev1;
        prev1=ans;
    }
    return prev1;
}

int maximumNonAdjacentSum(vector<int> & nums){
    
    int ans=solveTab(nums);
    return ans;
}
