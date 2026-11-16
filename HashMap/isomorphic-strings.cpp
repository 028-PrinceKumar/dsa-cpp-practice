// Problem: Isomorphic String
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/isomorphic-strings/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()){
            return false;
        }
        else{
            unordered_map<char,char>m1,m2;
            for(int i=0;i<s.length();i++){
                if(((m1.find(s[i])!=m1.end())&&
                (m1[s[i]]==t[i])) &&
                ((m2.find(t[i])!=m2.end())&&
                (m2[t[i]]==s[i]))){
                    continue;
                }
                else if(((m1.find(s[i])!=m1.end())&&
                (m1[s[i]]!=t[i])) ||
                ((m2.find(t[i])!=m2.end())&&
                (m2[t[i]]!=s[i]))){
                    return false;;
                }

                else{
                    m1[s[i]]=t[i];
                    m2[t[i]]=s[i];
                }
            }
            return true;
        }
    }
};
