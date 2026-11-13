/ Problem: Find the Difference
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/find-the-difference/description/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(m+n)
// Space Complexity: O(1)


class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>m;
        for(auto i:t){
            m[i]++;
        }
        char ch;
        for(auto j:s){
            m[j]--;
        }
        for(auto val:m){
            if(val.second==1){
                ch=val.first;
            }
        }
        return ch;
    }
};
