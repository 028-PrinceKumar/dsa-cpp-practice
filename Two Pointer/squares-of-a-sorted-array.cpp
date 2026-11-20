// Problem: Squares Of a Sorted Array
// Platform: LeetCode
// Link: https:https:https://leetcode.com/problems/squares-of-a-sorted-array/
// Difficulty: Easy
// Approach: Two Pointer
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int st=0,end=nums.size()-1;
        while(st<=end){
            if(abs(nums[st])<abs(nums[end])){
                ans.push_back(nums[end]);
                end--;
            }
            else{
                ans.push_back(nums[st]);
                st++;
            }
        }
        for(int i=0;i<ans.size();i++){
            ans[i]=ans[i]*ans[i];
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
