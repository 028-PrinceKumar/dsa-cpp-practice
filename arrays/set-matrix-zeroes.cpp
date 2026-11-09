// Problem: Set Matrix Zeroes
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/set-matrix-zeroes/description/
// Difficulty: Medium
// Approach: Traversing
// Time Complexity: O(m*n)
// Space Complexity: O(1)

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size(),n=matrix[0].size();
        bool firstRow=false,firstcolumn=false;
        for(int i=0;i<n;i++){
            if(matrix[0][i]==0){
                firstRow=true;
            }
        }

        for(int  j=0;j<m;j++){
            if(matrix[j][0]==0){
                firstcolumn=true;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }

        }
        // 1st row
        for(int i=1;i<n;i++){
            if(matrix[0][i]==0){
                for(int k=0;k<m;k++){
                    matrix[k][i]=0;
                }

            }
        }
        // 1st clmn
        for(int i=1;i<m;i++){
            if(matrix[i][0]==0){
                for(int k=0;k<n;k++){
                    matrix[i][k]=0;
                }

            }
        }

        if(firstRow){
            for(int i=0;i<n;i++){
                matrix[0][i]=0;
            }
        }
        

        if(firstcolumn){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
            }
        }
    }
};
