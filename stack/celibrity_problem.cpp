Link: https://leetcode.com/problems/largest-rectangle-in-histogram/description/
// Problem: celibrity problem
// Platform: Code Studio
// Difficulty: Medium
// Approach: Iterative
// Time Complexity: O(n)
// Space Complexity: O(1)

#include <iostream>
#include<vector>
#include<stack>
using namespace std;
bool knows(vector<vector<int>>& M,int a,int b,int n){
    if(M[a][b]==1){
        return true;
    }
    else{
        return false;
    }

}
int findCelebrity(vector<vector<int>>& M, int n) {
    stack<int>s;
    // push all element in stack
    for(int i=0; i<n;i++){
        s.push(i);
    }
    // step 2
    while(s.size()>1){
        int a=s.top();
        s.pop();
        int b=s.top();
        s.pop();
        if(knows(M,a,b,n)){
            s.push(b);
        }
        else{
            s.push(a);
        }

    }
    int ans=s.top();
    // step 3: single element in stack is potential celibrety
    // so verify it
    bool rowCheck=false;
    int zero_count=0;
    for(int i=0;i<n;i++){
        if(M[ans][i]==0){
            zero_count++;
        }
    }
    // all zeroes
    if(zero_count==n){
        rowCheck=true;
    }
    // column check
    bool colCheck=false;
    int oneCount=0;
    for(int i=0; i<n;i++){
        if(M[i][ans]==1){
            oneCount++;
        }
    }
    if(oneCount==n-1){
        colCheck=true;
    }
    if(rowCheck==true && colCheck==true){
        return ans;
    }
    else{
        return -1;
    }
}

int main() {
    vector<vector<int>> M = {
        {0, 1, 0},
        {0, 0, 0},
        {0, 1, 0}
    };

    int n = M.size();

    int celebrity = findCelebrity(M, n);

    if (celebrity == -1)
        cout << "No Celebrity Found\n";
    else
        cout << "Celebrity is person " << celebrity << endl;

    return 0;
}
