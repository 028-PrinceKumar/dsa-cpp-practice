// Problem: Two Sum
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/two-sum/description/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: In Best Case O(n), In Worst Case O(n^2)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        
        for(int i=0;i<nums.size();i++){
        int req=target-nums[i];
        auto it=m.find(req);
        if(it!=m.end()){
            ans.push_back(it->second);
                ans.push_back(i);
                break;
        }
        else{
            m[nums[i]]=i;
        }

    }
        return ans;
    }
};
