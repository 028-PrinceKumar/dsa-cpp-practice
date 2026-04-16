// Problem: Search in Rotated Sorted Array
// Platform: LeetCode
// Link: https://leetcode.com/problems/search-in-rotated-sorted-array/description/
// Difficulty: Medium
// Approach: Brute Force
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int search(vector<int>& nums, int target) {
        for(int i=0; i<nums.size();i++){
            if(nums[i]==target){
                return i;
            }
        }
        return -1;
    }
};
