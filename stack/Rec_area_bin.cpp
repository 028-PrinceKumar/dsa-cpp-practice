Link: https:https://leetcode.com/problems/maximal-rectangle/description/
// Problem: Largest Rectengular Area in Binary matrix
// Platform: LeetCode
// Difficulty: Hard
// Approach: Iterative
// Time Complexity: O(n*m)
// Space Complexity: O(m)

class Solution {
public:
    vector<int> nextSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = n - 1; i >= 0; i--) {
            while(s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    vector<int> prevSmallerElement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);

        for(int i = 0; i < n; i++) {
            while(s.top() != -1 && arr[s.top()] >= arr[i]) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

        vector<int> next = nextSmallerElement(heights, n);
        vector<int> prev = prevSmallerElement(heights, n);

        int area = 0;

        for(int i = 0; i < n; i++) {
            int length = heights[i];

            if(next[i] == -1)
                next[i] = n;

            int breadth = next[i] - prev[i] - 1;
            int newArea = length * breadth;

            area = max(area, newArea);
        }

        return area;
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;

        int n = matrix.size();
        int m = matrix[0].size();

        vector<int> heights(m, 0);
        int maxi = 0;

        for(int i = 0; i < n; i++) {

            for(int j = 0; j < m; j++) {

                if(matrix[i][j] == '1')
                    heights[j] += 1;
                else
                    heights[j] = 0;
            }

            maxi = max(maxi, largestRectangleArea(heights));
        }

        return maxi;
    }
};
