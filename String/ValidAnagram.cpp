// Problem:Valid Anagram
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/valid-anagram/description/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O((n))
// Space Complexity: O(1)

class Solution {
public:
    bool isAnagram(string s, string t) {
        int freq[26]={0};
        if(s.length()!=t.length()){
            return false;
        }
        else{
            for(int i=0;i<s.length();i++){
                freq[s[i]-'a']++;
            }
            for(int i=0;i<t.length();i++){
                if(freq[t[i]-'a']==0){
                    return false;
                }
                else{
                    freq[t[i]-'a']--;
                }
            }
        }
        return true;
        
    }
};
