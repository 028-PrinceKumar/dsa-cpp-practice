// Problem: Plus One
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/plus-one/description/
// Difficulty: Easy
// Approach: Brute Force
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end=digits.size()-1;
       while(end>=0){
        if(digits[end]<9){
            digits[end]++;
            return digits;
        }
        else{
            digits[end]=0;
            end--;
        }
       }
       digits.insert(digits.begin(),1);
       return digits;
    }
};
