// Problem: Continuous Subarray Sum
// Platform: LeetCode
// Link:https://leetcode.com/problems/continuous-subarray-sum/description/
// Difficulty: Medium
// Approach: Mapping
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        // int n=nums.size();
        // for(int i=0;i<n;i++){
        //     for(int j=i;j<n;j++){
        //         int sum=0,cnt=0;
        //         for(int k=i;k<=j;k++){
        //             sum+=nums[k];
        //             cnt++;
                    
        //         }
        //         if(cnt>=2 && sum%k==0){
        //                 return true;
        //         }
        //     }
        // }
        // return false;

        unordered_map<int,int>m;
        int prefixSum=0;
        m[0]=-1;
        for(int i=0;i<nums.size();i++){
            prefixSum+=nums[i];
            int rem=prefixSum%k;
            if(m.find(rem)==m.end()){
                m[rem]=i;

            }
            else if(m.find(rem)!=m.end()){
                if((i-m[rem])>=2){
                    return true;
                }
            }
        }
        return false;
    }
};

