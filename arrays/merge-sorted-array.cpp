// Problem: Merged Sorted Array
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/merge-sorted-array/description/
// Difficulty: Easy
// Approach: Two pointer
// Time Complexity: O(M+n)
// Space Complexity: O(n)

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i=0,j=0;
        vector<int>ans;
        while(i<m && j<n){
            if(nums1[i]>nums2[j]){
                ans.push_back(nums2[j]);
                j++;
            }
            else if(nums1[i]<nums2[j]){
                ans.push_back(nums1[i]);
                i++;
            }
            else{
                ans.push_back(nums2[j]);
                j++;
                ans.push_back(nums1[i]);
                i++;
            }
        }
        while(i<m){
            ans.push_back(nums1[i]);
                i++;
        }
        while(j<n){
            ans.push_back(nums2[j]);
            j++;
        }
      
        for(int i=0;i<ans.size();i++){
            nums1[i]=ans[i];
        }
    }
};

