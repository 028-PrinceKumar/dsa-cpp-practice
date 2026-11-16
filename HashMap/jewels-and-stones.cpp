// Problem: Jewels and Stones
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/jewels-and-stones/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(j)
// Space Complexity: O(1)

class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<char,int>m;
        for(auto i:jewels){
            m[i]++;
        }
        int ans=0;
        for(int i=0;i<stones.size();i++){
            if(m.find(stones[i])!=m.end()){
                ans++;
            }
        }
        return ans;
    }
};
