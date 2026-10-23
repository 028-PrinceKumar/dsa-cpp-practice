// Problem: Concatenation of Array
// Platform: LeetCode
// Link: https:https:https://leetcode.com/problems/concatenation-of-array/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(2n)

class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums.push_back(nums[i]);
        }
        return nums;

    }
};
