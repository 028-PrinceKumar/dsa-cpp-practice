// Problem: Single Number
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/single-number/
// Difficulty: Easy
// Approach: XOR gate
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        if(nums.size()==1){
            return nums[0];
        }
        else{
            int ans=nums[0];
            for(int i=1;i<nums.size();i++){
                ans=ans^nums[i];
            }
            return ans;
        }
    }
};
