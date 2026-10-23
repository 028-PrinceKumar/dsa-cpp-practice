// Problem: Kids with the Greatest Number of Candidate
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int maxel=candies[0];
        vector<bool>ans;
        for(int i=0;i<candies.size();i++){
            maxel=max(maxel,candies[i]);
        }
        for(int i=0;i<candies.size();i++){
            if((candies[i]+extraCandies)>=maxel){
                ans.push_back(1);
            }
            else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
