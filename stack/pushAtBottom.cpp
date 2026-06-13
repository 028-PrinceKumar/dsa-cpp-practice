/ Problem: Push element at bottom
// Platform: CodeStudio
// Difficulty: Easy
// Approach: Recursively
// Time Complexity: O(log n)
// Space Complexity: O(1)


// Insert an element at its Bottom in a given stack

#include <iostream>
#include<stack>
using namespace std;

void solve(stack<int>& s, int x){
    // base case
    if(s.empty()){
        s.push(x);
        return ;
    }
    int val=s.top();
    s.pop();
    // recursive call
    solve(s,x);
    s.push(val);

}
stack<int>pushAtBottom(stack<int>& myStack,int x){
    solve(myStack,x);
    return myStack;
}
int main() {
    stack<int> s;
    s.push(5);
    s.push(4);
    s.push(1);
    s.push(7);
    stack<int>ans=pushAtBottom(s,12);
    while(!ans.empty()){
        cout<<ans.top()<<" ";
        ans.pop();
    }

    return 0;
}
