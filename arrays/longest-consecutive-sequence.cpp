// Problem: Longest Consecutive Sequence
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/longest-consecutive-sequence/description/
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(nlog(n))
// Space Complexity: O(log n)

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int temp_cnt=0,per_cnt=0;
        int n=nums.size();
        if(n==0 ||n==1){
            return n;
        }
        else{
            sort(nums.begin(),nums.end());
            for(int i=1;i<n;i++){
                if((nums[i]-nums[i-1])>1){
                    temp_cnt=0;
                }
                else if(nums[i]==nums[i-1]){
                    continue;
                }
                else{
                    temp_cnt++;
                }
                per_cnt=max(temp_cnt,per_cnt);

            }
        }
        
        return per_cnt+1;
    }
};
