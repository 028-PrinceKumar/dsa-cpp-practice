// Problem: Contains With Most Water
// Platform: LeetCode
// Link: https://leetcode.com/problems/container-with-most-water/description/
// Difficulty: Medium
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxArea(vector<int>& height) {
        int ans=0;
        int st=0,end=height.size()-1;
        while(st<end){
            int h=min(height[st],height[end]);
            int w=end-st;
            int area=h*w;
            ans=max(ans,area);
            if(height[st]>height[end]){
                end--;
            }
            else if(height[st]<height[end]){
                st++;
            }
            else{
                st++,end--;
            }
        }
        return ans;
    
    }
};
