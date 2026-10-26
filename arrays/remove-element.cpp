// Problem: Remove Element
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/remove-element/
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int i=0,j=0;
        while(j<nums.size()){
            if(nums[j]!=val){
                nums[i]=nums[j];
                i++;
            }
            j++;
        }
        return i;
        
    }
};
