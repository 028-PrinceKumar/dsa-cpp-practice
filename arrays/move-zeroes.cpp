// Problem: Move Zeroes
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/move-zeroes/
// Difficulty: Easy
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        if(nums.size()==1){
            return;
        }
        else{
            int i=0,j=0;
            while(j<nums.size()){
                if(nums[j]!=0){
                    swap(nums[i],nums[j]);
                    i++;
                }
                j++;
            }
        }
    }
};
