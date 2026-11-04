// Problem: Happy Number
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/happy-number/description/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n log (n))
// Space Complexity: O(k)

class Solution {
public:
    bool isHappy(int n) {
      unordered_set<int>s;
      while(s.find(n)==s.end() && n!=1){
        s.insert(n);
        int sum=0;
        while(n!=0){
            sum+=pow(n%10,2);
            n/=10;
        }
        n=sum;
      }
      return n==1;
    }
};
