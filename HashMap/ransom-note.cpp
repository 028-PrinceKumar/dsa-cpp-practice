// Problem: Ransom Note
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/ransom-note/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(m+n)
// Space Complexity: O(n)


class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int>m;
        for(auto i:magazine){
            m[i]++;
        }

        for(int j=0;j<ransomNote.size();j++){
            if(m.find(ransomNote[j])!=m.end()){
                m[ransomNote[j]]--;
                if(m[ransomNote[j]]<0){
                    return false;
                }
                
            }
            else{
                return false;
            }
        }
        return true;

    }
};
