// Problem: Contains Duplicates
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/contains-duplicate/
// Difficulty: Easy
// Approach: Brute Force
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool containsDuplicate(vector<int>& nums){
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                return true;
            }
        }
        return false; 
        }
};
