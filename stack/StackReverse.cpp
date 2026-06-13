// Problem: Recursively revrese the stack
// Platform: CodeStudio
// Difficulty: Easy
// Approach: Recursively
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Reverssr the stack using Recursion

#include <iostream>
#include<stack>
using namespace std;

void insertAtBottom(stack<int> &s,int element){
    if(s.empty()){
        s.push(element);
        return;
    }
    int num=s.top();
    s.pop();
    // recursive call
    insertAtBottom(s,element);
    s.push(num);
}

void ReverseStack(stack<int> &stack){
    // base case
    if(stack.empty()){
        return;
    }
    int num=stack.top();
    stack.pop();
    // recursive call
    ReverseStack(stack);
    insertAtBottom(stack, num);
}
int main() {
    stack<int>s1;
    s1.push(9);
    s1.push(7);
    s1.push(4);
    s1.push(3);
    ReverseStack(s1);
    while(!s1.empty()){
        cout<<s1.top()<<" ";
        s1.pop();
    }
    return 0;
}
