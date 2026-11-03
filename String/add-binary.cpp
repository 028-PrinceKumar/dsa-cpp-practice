// Problem: Add Binary
// Platform: LeetCode
// Link: https: https://leetcode.com/problems/add-binary/description/
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    string addBinary(string a, string b) {
        int n=max(a.length(),b.length());
        a.insert(0,n-a.length(),'0');
        b.insert(0,n-b.length(),'0');
        string ans;
        int carry=0,i=a.length()-1;

        while(i>=0){
            int x=a[i]-'0';
            int y=b[i]-'0';

            int sum=x+y+carry;

            if(sum==0){
                ans.push_back('0');
                carry=0;
            }
            else if(sum==1){
                ans.push_back('1');
                carry=0;
            }
            else if(sum==2){
                ans.push_back('0');
                carry=1;
            }
            else if(sum==3){
                ans.push_back('1');
                carry=1;
            }
            if(i==0 && carry==1){
                ans.push_back('1');
            }
            i--;
        }
        reverse(ans.begin(),ans.end());
        return ans;

    }
};

