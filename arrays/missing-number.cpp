// Problem: Missing Number
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/missing-number/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int nums_sum=0,act_sum=0;
        for(int i=0;i<nums.size();i++){
            nums_sum+=nums[i];
        }
        for(int i=1;i<=nums.size();i++){
            act_sum+=i;
        }
        return act_sum-nums_sum;
        
    }
};
