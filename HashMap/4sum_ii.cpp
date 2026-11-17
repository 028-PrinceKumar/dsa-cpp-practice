// Problem: 4Sum II
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/4sum-ii/
// Difficulty: Medium
// Approach: Hashing
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)

class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        unordered_map<int,int>m;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                m[nums1[i]+nums2[j]]++;
                
            }
        }
        int cnt=0;
        for(int i=0;i<nums1.size();i++){
            for(int j=0;j<nums1.size();j++){
                int num=nums3[i]+nums4[j];
                num*=-1;
                if(m.find(num)!=m.end()){
                    cnt+=m[num];
                }
            }
        }
        return cnt;
    }
};
