// Problem: Plus One
// Platform: LeetCode
// Link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int best_buy=prices[0];
        int max_profit=0;
        for(int i=1; i<prices.size();i++){
            if(prices[i]>best_buy){
                max_profit=max(max_profit,prices[i]-best_buy);
            }
            best_buy=min(best_buy,prices[i]);
        }
        return max_profit;
    }
};
