// Problem: Next Permutation
// Platform: LeetCode
// Link: https://leetcode.com/problems/next-permutation/
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)


class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int idx=-1,n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                idx=i;
                break;
            }
        }
        if(idx==-1){
            reverse(nums.begin(),nums.end());
            return;
        }
        for(int i=n-1;i>=idx;i--){
            if(nums[idx]<nums[i]){
                swap(nums[idx],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+(idx+1),nums.end());
    }
};
