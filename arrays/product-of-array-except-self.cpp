// Problem: Product of Array Except Self
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/product-of-array-except-self/description/
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mul=1,cnt_zeros=0;
        vector<int>ans;
        for(auto i: nums){
            if(i==0){
                mul*=1;
                cnt_zeros++;
            }
            else{
            mul*=i;
            }
        }

        if(cnt_zeros>1){
            for(int i=0;i<nums.size();i++){
                ans.push_back(0);
            }
        }
        else if(cnt_zeros==0){
            for(int i=0;i<nums.size();i++){
                ans.push_back(mul/nums[i]);
            }
        }
       else{
            for(int i=0;i<nums.size();i++){
               if(nums[i]==0){
                    ans.push_back(mul);
               }
               else{
                ans.push_back(0);
               }
            }
       }
        return ans;
    }
};
