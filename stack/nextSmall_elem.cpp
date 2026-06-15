// Problem: Next smaller element
// Platform: CodeStudio
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include<vector>
#include<stack>
// Find the second smaller element
using namespace std;
vector<int>nextSmallerElement(vector<int>&arr,int n){
    stack<int>s;
    s.push(-1);
    vector<int>ans(n);
    for(int i= n-1;i>=0;i--){
        int curr=arr[i];
        while(s.top()>=curr){
            s.pop();
        }
        ans[i]=s.top();
        s.push(curr);
    }
    return ans;

}
int main() {
    vector<int>arr={2,1,4,3};
    int size=arr.size();
    vector<int>ans= nextSmallerElement(arr,size);
    for(int x: ans){
        cout<<x<<" ";
    }
    return 0;
}

