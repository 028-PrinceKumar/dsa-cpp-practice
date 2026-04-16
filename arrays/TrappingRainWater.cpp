// Problem: Trapping Rain Water
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/trapping-rain-water/
// Difficulty: Hard
// Approach: Optimal Way
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int trap(vector<int>& height) {
        vector<int>left(height.size());
        vector<int>right(height.size());
        int n=height.size();
        left[0]=height[0];
        right[0]=height[n-1];
        for(int i=1; i<n; i++){
            left[i]=max(left[i-1],height[i-1]);
        }
        for(int i=n-2; i>=0;i--){
            right[i]=max(right[i+1],height[i+1]);
        }
        int traped_water=0;
        for(int i=0; i<n; i++){
            int curr_water=min(left[i],right[i])-height[i];
            if(curr_water>0){
                traped_water+=curr_water;
            }
            else{
                continue;
            }
        }
        return traped_water;
    }
};


