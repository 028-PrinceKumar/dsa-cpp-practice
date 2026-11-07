// Problem: Rotate Image
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/rotate-image/description/
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(n^2)
// Space Complexity: O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        for(int i=0; i<m; i++){
        for(int j=i; j<n; j++){
            swap(matrix[i][j],matrix[j][i]);
        }
    }
    for(int i=0; i<m;i++){
        int s=0, e=n-1;
        while(s<e){
            swap(matrix[i][s],matrix[i][e]);
            s++,e--;
        }
    }
    }
};
