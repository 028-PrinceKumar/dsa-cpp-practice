// Problem: Remove Duplicate
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[i]!=nums[j]){
                i++;
                nums[i]=nums[j];
            }
            j++;
        }
        return i+1;
    }
};
