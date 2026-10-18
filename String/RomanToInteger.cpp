// Problem:Roman To Integer
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/roman-to-integer/description/
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int value(char ch){
        switch (ch)
        {
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
        default:
            return 0;
        }
    
    }
    int romanToInt(string str) {
        int sum=0;
    for(int i=0;i<str.length();i++){
        if(value(str[i])<value(str[i+1])){
            sum+=value(str[i+1])-value(str[i]);
            i++;
        }
        else{
            sum+=value(str[i]);
        }
    }
    return sum;
    }
};
