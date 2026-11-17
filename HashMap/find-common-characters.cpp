// Problem: Find Common Characters
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/find-common-characters/description/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(nl+k)
// Space Complexity: O(l)

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>glob_freq(26,INT_MAX);
        vector<string>ans;
        for(auto i:words){
            vector<int>curr_freq(26,0);
            for(auto j:i){
                curr_freq[j-'a']++;
                
            }
            for(int j=0;j<26;j++){
                glob_freq[j]=min(glob_freq[j],curr_freq[j]);
            }
        }

        for(int i=0;i<26;i++){
            string s=string(1,'a'+i);
            for(int j=0;j<glob_freq[i];j++){
                ans.push_back(s);
            }
        }
        return ans;
    }


};

