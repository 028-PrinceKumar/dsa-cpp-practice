// Problem: Group Anagram
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/group-anagrams/description/
// Difficulty: Medium
// Approach: Hashing
// Time Complexity: O(n.k.log(k))
// Space Complexity: O(n.k)

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;
        for(auto s:strs){
            string temp=s;
            sort(temp.begin(),temp.end());
            m[temp].push_back(s);
        }
        vector<vector<string>>ans;
        for(auto val:m){
            ans.push_back(val.second);
        }
        return ans;

    }
};
