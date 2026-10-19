// Problem:Valid Palindrome String
// Platform: LeetCode
// Link: https:https:https://leetcode.com/problems/valid-palindrome/description/
// Difficulty: Easy
// Approach:Two pointers
// Time Complexity: O((n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(string str) {
    int st=0,end=str.length()-1;
    while(st<=end){
        if(str[st]>='A' && str[st]<='Z'){
            str[st]=str[st]-'A'+'a'; 
        }
        if(str[end]>='A' && str[end]<='Z'){
            str[end]=str[end]-'A'+'a'; 
        }
        if(!((str[st]>='a' && str[st]<='z')||(str[st]>='0' && str[st]<='9'))){
            st++;
        }
        else if(!((str[end]>='a' && str[end]<='z')||(str[end]>='0' && str[end]<='9'))){
            end--;
        }
        else if(str[st]==str[end]){
            st++,end--;
        }
        else{
            return false;
        }   
    }
    return true;
    }
};
