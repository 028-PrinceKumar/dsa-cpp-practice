// Problem: Power Of Three
// Platform: LeetCode
// Link: https:https:https://leetcode.com/problems/power-of-three/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(log (n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=2 && n!=1){
            return false;
        }
        else{
            if(n==1){
            return true;
            }
            else if(n%3==0){
                while(n>=2){
                    if(n%3==1 || n%3==2){
                        return false;
                    }
                    n/=3;
                }
                return true;
            }
            else{
                return false;
            }
        }
        
    }
};
