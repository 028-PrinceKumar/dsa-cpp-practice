// Problem: Power Of Two
// Platform: LeetCode
// Link: https:https:https://leetcode.com/problems/power-of-two/description/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(log (n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0){
            return false;
        }
        else{
            if(n==1){
            return true;
        }
        else if(n%2==0){
            while(n>1){
                if(n%2==1){
                    return false;
                }
                n/=2;
            }
            return true;
        }
        else{
            return false;
        }
        }
        
    }
};
