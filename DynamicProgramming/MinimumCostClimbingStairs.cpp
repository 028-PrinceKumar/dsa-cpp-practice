// Problem: Minimum Cost Climbing Stairs Problem using DP
// Difficulty: Easy
// Approach:Buttom to top
// Time Complexity: O(n)
// Space Complexity: O(n)

// Space optimization method

#include <iostream>
#include<vector>
using namespace std;

int solve(vector<int>& cost,int n){
    int prev2=cost[0];
    int prev1=cost[1];

    for(int i=2;i<n;i++){
        int curr=cost[i]+min(prev1,prev2);
        prev2=prev1;
        prev1=curr;
    }

    return min(prev1,prev2);

}

int minCostClimbingStairs(vector<int>& cost){
    int n=cost.size();
    return solve(cost,n);

}

int main() {
    vector<int>cost={10,15,20};
    int ans=minCostClimbingStairs(cost);
    cout<<ans<<endl;
    return 0;
}
