// Problem: Largest Increases Subsequence
// Difficulty: Hard
// Approach:DP with the Binary Search
// Time Complexity: O(nlog(n))
// Space Complexity: O(n)

int solve(int n, int a[]){
    if(n==0){
        return 0;
    }
    vector<int>ans;
    ans.push_back(a[0]);

    for(int i=0; i<n;i++){
        if(a[i]>ans.back()){
            ans.push_back(a[i]);
        }
        else{
            // Just big index get
            int index=lower_bound(ans.begin(),ans.end(),a[i])-ans.begin();
            ans[index]=a[i];
        }
    }
    return ans.size();
}

int longestSubsequence(int n, int a[]){
    return solve(n,a);
}
