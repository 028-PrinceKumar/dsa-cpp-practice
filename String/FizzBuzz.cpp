// Problem:Fizz Buzz
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/fizz-buzz/description/
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>ans;
        for(int i=1;i<=n;i++){
            if(i%3==0 && i%5==0){
                ans.push_back("FizzBuzz");
            }
            else if(i%3==0){
                ans.push_back("Fizz");
            }
            else if(i%5==0){
                ans.push_back("Buzz");
            }
            else{
                ans.push_back(to_string(i));
            }

        }
        return ans;
    }
};


