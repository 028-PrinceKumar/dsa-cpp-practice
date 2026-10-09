// Problem: Combination Sum Problems
// Difficulty: Easy
// Approach:Tabulation Methods
// Time Complexity: O(m*n)
// Space Complexity: O(n)

#include <iostream>
#include<vector>
using namespace std;

int solveTab(vector<int>& num, int tar){
    vector<int>dp(tar+1,0);
    dp[0]=1;
    // Traversing from target 1 to tar
    for(int i=1; i<=tar;i++){
        // traversing on num vector
        for(int j=0; j<num.size();j++){
            if(i-num[j]>=0){
                dp[i]+=dp[i-num[j]];
            }
        }
    }
    return dp[tar];
}

int findWays(vector<int>& num,int tar){
    return solveTab(num,tar);
}
int main() {
    vector<int>num={1,2,5};
    int target=5;
    int ans=findWays(num,target);
    cout<<ans<<endl;

    return 0;
}
