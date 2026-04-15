// Problem: Convert 1D Array into 2D Array
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/convert-1d-array-into-2d-array/description/
// Difficulty: Easy
// Approach: Brute Force
// Time Complexity: O(n^2)
// Space Complexity: O(n)

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        if(original.size()!=m*n){return {};}
        else{
        vector<vector<int>> mat(m, vector<int>(n));
        int count=0;
        for(int i=0; i<m;i++){
            for(int j=0; j<n; j++){
                mat[i][j]=original[count];
                count++;
            }
        }
        return mat;
    }
    
    }
};
