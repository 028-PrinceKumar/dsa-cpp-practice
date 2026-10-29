// Problem: Find Pivot Index
// Platform: LeetCode
// Link: https:https://leetcode.com/problems/find-pivot-index/description/
// Difficulty: Easy
// Approach: Prefix Suffix
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 0;
        }
        else{
            
            vector<int>prefix(n);
            prefix[0]=nums[0];
            vector<int>suffix(n);
            suffix[n-1]=nums[n-1];
            for(int i=1;i<n;i++){
                prefix[i]=nums[i]+prefix[i-1];
            }
            for(int i=n-2;i>=0;i--){
                suffix[i]=nums[i]+suffix[i+1];
            }

            if(suffix[1]==0){
                return 0;
            }

                for(int i=1;i<n-1;i++){
                    if(prefix[i-1]==suffix[i+1]){
                        return i;
                    }
                }


            if(prefix[n-2]==0){
                return n-1;
            }
        }
        return -1;
    }
};
