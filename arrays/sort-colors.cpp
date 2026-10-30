// Problem:Sort Colors
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/sort-colors/description/
// Difficulty: Medium
// Approach: Three Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    void sortColors(vector<int>& nums) {
        int st=0,mid=0,end=nums.size()-1;
        while(mid<=end){
            if(nums[mid]==0){
               swap(nums[st],nums[mid]);
               st++,mid++;
            }
            else if(nums[mid]==2){
                    swap(nums[mid],nums[end]);
                    end--;
            }
            else{
                mid++;
            }
        }
    }
};
