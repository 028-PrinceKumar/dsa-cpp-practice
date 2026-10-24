// Problem: Majority Element
// Platform: LeetCode
// Link: https://leetcode.com/problems/majority-element/
// Difficulty: Medium
// Approach: Moore's Voting Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=0,freq=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(nums[i]==ans){
                freq++;
            }
            else{
                freq--;
            }
        }
        return ans;
    }
};
