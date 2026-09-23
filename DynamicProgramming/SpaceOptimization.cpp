// Problem: Fibonnacci Series using Space Optimization Dyanmic Programming 
// Difficulty: Easy
// Approach:Space optimization
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include<vector>
using namespace std;

int fib(int n){
    int prev1=1;
    int prev2=0;
    if(n==0){
        return 0;
    }
    for(int i=2; i<=n;i++){
        int curr=prev1+prev2;
        // shifing logic
        prev2=prev1;
        prev1=curr;

    }
    return prev1;
}

int main() {
    int n;
    cin>>n;
    // step 1
    // vector<int>dp(n+1);
    cout<<fib(n)<<endl;

    return 0;
}


