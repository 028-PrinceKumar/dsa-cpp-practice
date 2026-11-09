// Problem: Pascal's Triangle
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/pascals-triangle/description/
// Difficulty: Easy
// Approach: Iterative
// Time Complexity: O(n^2)
// Space Complexity: O(n^2)


class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=0;i<numRows;i++){
            vector<int>temp;
            temp.push_back(1);
            for(int j=1;j<=i;j++){
                if(j==i){
                    temp.push_back(1);
                }
                else{
                    int value=ans[i-1][j]+ans[i-1][j-1];
                    temp.push_back(value);
                }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};
