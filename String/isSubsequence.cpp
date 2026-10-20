// Problem:Is Subsequences
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/is-subsequence/
// Difficulty: Easy
// Approach:two Pointer
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(j<t.length()){
            if(s[i]==t[j]){
                i++,j++;
            }
            else{
                j++;
            }
        }
        if(i==s.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
