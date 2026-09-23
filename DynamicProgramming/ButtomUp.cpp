// Problem: Fibonnacci Series using Dyanmic Programming
// Difficulty: Easy
// Approach:Buttom to top
// Time Complexity: O(n)
// Space Complexity: O(n)


// Tabulation Methods
#include <iostream>
#include<vector>
using namespace std;

// Buttom up Approach

int fib(int n,vector<int>&dp){
    // step 2
    dp[0]=0;
    dp[1]=1;
    // step 3
    for(int i=2;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2];
    }

    return dp[n];

}

int main() {
    int n;
    cin>>n;
    // step 1
    vector<int>dp(n+1);
    cout<<fib(n,dp)<<endl;

    return 0;
}



