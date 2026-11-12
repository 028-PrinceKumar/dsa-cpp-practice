// Problem: Top k Frequent Elements
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/top-k-frequent-elements/
// Difficulty: Medium
// Approach: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        unordered_map<int,int>m;
        for(int i=0;i<nums.size();i++){
            m[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto val:m){
            v.push_back({val.first,val.second});
        }

        sort(v.begin(),v.end(),[](auto &a, auto &b){
            return a.second>b.second;
        });

        int cnt=0;
        for(auto val:v){
            if(cnt<k){
                ans.push_back(val.first);
            }
            cnt++;
        }
        return ans;
    }
};
