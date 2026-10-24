// Problem: Maximum Subarray
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/maximum-subarray/description/
// Difficulty: Medium
// Approach: Kadan's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int curr_sum=nums[0];
        for(int i=1;i<nums.size();i++){
            curr_sum=max(nums[i],curr_sum+nums[i]);
            ans=max(ans,curr_sum);
            
        }
        return ans;
    }
};
