// Problem: Delete middle element from stack
// Platform: CodeStudio
// Difficulty: Medium
// Approach: Recursively
// Time Complexity: O(max(1)
// Space Complexity: O(max(1)

#include <iostream>
#include<stack>
using namespace std;

// Delete the middle element in stack
void solve(stack<int>& inputStack,int count,int size){
    // base case
    if(count==size/2){
        inputStack.pop();
        return ;
    }
    int num=inputStack.top();
    inputStack.pop();
    // Recursive call
    solve(inputStack,count+1,size);
    inputStack.push(num);

}
void deleteMiddle(stack<int>& inputStack,int N){
    int count=0;
    solve(inputStack,count,N);
}
int main() {
    stack<int>s;
    s.push(4);
    s.push(2);
    s.push(9);
    s.push(5);
    s.push(3);
    deleteMiddle(s,s.size());
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}
