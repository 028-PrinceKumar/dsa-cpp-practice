// Problem: Spiral Matrix
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/spiral-matrix/
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(m*n)
// Space Complexity: O(m*n)

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>ans;
    int sr=0,sc=0,er=matrix.size()-1,ec=matrix[0].size()-1;
    while(sr<=er && sc<=ec){
        // 1st row traverse
        for(int i=sc;i<=ec;i++){
            ans.push_back(matrix[sr][i]);
        }
        // last column traverse
        for(int i=sr+1;i<=er;i++){
            ans.push_back(matrix[i][ec]);
        }
        // last row
        if(sr<er){
            for(int i=ec-1;i>=sc;i--){
                ans.push_back(matrix[er][i]);
            }
        }
        // first column
        if(sc<ec){
            for(int i=er-1;i>sr;i--){
            ans.push_back(matrix[i][sc]);
            }
        }
        
        sr++,ec--,er--,sc++;

    }
    return ans;
    }
};
