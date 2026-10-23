// Problem: Shuffle The Array
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/shuffle-the-array/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int i=0;
        while(n<nums.size()){
            ans.push_back(nums[i]);
            ans.push_back(nums[n]);
            n++,i++;
        }
        return ans;

    }
};
