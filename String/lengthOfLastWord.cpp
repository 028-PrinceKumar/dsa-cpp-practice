// Problem:Length of Last word
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/length-of-last-word/description/
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int lengthOfLastWord(string s) {
        int cnt=0;
        for(int i=s.length()-1; i>=0;i--){
          
            if(s[i]==' ' && cnt>0){
                break;
            }
            if(s[i]!=' '){
                cnt++;
            }
        }
        return cnt;
    }
};
