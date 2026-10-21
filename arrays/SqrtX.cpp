// Problem: Sqrt(x)
// Platform: LeetCode
// Link:https://leetcode.com/problems/sqrtx/description/
// Difficulty: Easy
// Approach: Binary Search Technique
// Time Complexity: O(log(n))
// Space Complexity: O(1)

class Solution {
public:
    long long mySqrt(long long x) {
        long long st=0,end=x,l=x/2;
        while(st<=end){
            long long mid= st+(end-st)/2;
            long long temp=mid*mid;
            if(temp==x){
                return mid;
            }
            else if(temp>x){
                end=mid-1;
            }
            else {
                st=mid+1;
            }
        }
        return end;
    }
};
