// Problem: Word Pattern
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/word-pattern/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> str;
        stringstream ss(s);
        string word;

        while (ss >> word) {
            str.push_back(word);
        }

        bool ans = 0;

        if (str.size() != pattern.length()) {
            return false;
        }
        else {
            unordered_map<char, string> m1;
            unordered_map<string, char> m2;

            for (int i = 0; i < pattern.length(); i++) {

                if (m1.find(pattern[i]) != m1.end() &&
                    m1[pattern[i]] == str[i] &&
                    m2.find(str[i]) != m2.end() &&
                    m2[str[i]] == pattern[i]) {
                    continue;
                }

                else if (
                    (m1.find(pattern[i]) != m1.end() &&
                     m1[pattern[i]] != str[i]) ||
                    (m2.find(str[i]) != m2.end() &&
                     m2[str[i]] != pattern[i])
                ) {
                    return false;
                }

                else {
                    m1[pattern[i]] = str[i];
                    m2[str[i]] = pattern[i];
                }
            }
        }

        return true;
    }
};
