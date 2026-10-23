// Problem: Richest Customer Wealth
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/richest-customer-wealth/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_sum=0;
        for(auto i:accounts){
            int sum=0;
            for(auto j:i){
                sum+=j;
            }
            max_sum=max(sum,max_sum);
        }
        return max_sum;
        
    }
};
