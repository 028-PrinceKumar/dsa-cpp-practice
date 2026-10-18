// Problem:Palindrome Number
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/palindrome-number/description/
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(log(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(long long x) {
        if (x<0){
            return false;
        }
    long long rev=0,temp=x;
    while(temp>0){
        rev=rev*10+(temp%10);
        temp/=10;
    }
    if(rev==x){
        return true;
    }
    else{
        return false;
    }

    }
};
