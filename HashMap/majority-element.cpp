// Problem: Majority Element II
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/majority-element-ii/
// Difficulty: Medium
// Approach: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int>m;
        vector<int>ans;
        for(auto num:nums){
            m[num]++;
        }
        for(auto v:m){
            if((v.second)>(nums.size()/3)){
                ans.push_back(v.first);
            }
        }
        return ans;
    }
};
