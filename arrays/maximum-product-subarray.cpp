// Problem: Maximum product Subarray
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/maximum-product-subarray/description/
// Difficulty: Medium
// Approach: Kadan's algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxProduct(vector<int>& nums) {
        // int maxmul=INT8_MIN;
        // for(int i=0; i<nums.size();i++){
        //     int curr_mul;
        //     if(nums[i]==0){
        //         curr_mul=1;
        //     }
        //     else curr_mul=1;
        //     for(int j=i; j<nums.size();j++){
        //         curr_mul*=nums[j];
        //         maxmul=max(curr_mul,maxmul);
        //     }
            
        // }

        int maxmul=nums[0];
        int minmul=nums[0];
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(nums[i]<0){
                swap(maxmul,minmul);
            }
            maxmul=max(maxmul*nums[i],nums[i]);
            minmul=min(minmul*nums[i],nums[i]);
            ans=max(maxmul,ans);


        }
    return ans;
        
    }
};
