// Problem: Unique Number of Occurences
// Platform: LeetCode
// Link: https://leetcode.com/problems/unique-number-of-occurrences/
// Difficulty: Easy
// Approach: Hashing
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int>m1,m2;

        for(auto val:arr){
            m1[val]++;
        }
        for(auto v:m1){
            if(m2.find(v.second)!=m2.end()){
                return false;
            }
            else{
                m2[v.second]=v.first;
            }

        }
        
        return true;
    }
};
