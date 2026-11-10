// Problem: Games of Life
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/game-of-life/description/
// Difficulty: Medium
// Approach: Optimal Way
// Time Complexity: O(m*n)
// Space Complexity: O(m*n)


class Solution {
public:
    void gameOfLife(vector<vector<int>>& b) {
        int m = b.size();
        int n = b[0].size();

        vector<vector<int>> ans(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                int sum = 0;

                // Check all 8 neighbours
                for (int x = -1; x <= 1; x++) {
                    for (int y = -1; y <= 1; y++) {

                        if (x == 0 && y == 0)
                            continue;

                        int r = i + x;
                        int c = j + y;

                        if (r >= 0 && r < m && c >= 0 && c < n) {
                            sum += b[r][c];
                        }
                    }
                }

                // Apply Game of Life rules
                if (b[i][j] == 1 && (sum == 2 || sum == 3)) {
                    ans[i][j] = 1;
                }
                else if (b[i][j] == 0 && sum == 3) {
                    ans[i][j] = 1;
                }
            }
        }

        b = ans;
    }
};
