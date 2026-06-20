// Platform: Geeksforgeeks
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

// Reverse first k element of queue

#include <iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int>modifyQueue(queue<int>&q,int k){
    // algo
    // step1: pop first k el from Q and put into stack
    stack<int> s;
    for(int i=0;i<k;i++){
        int val=q.front();
        q.pop();
        s.push(val);
    }
    // step 2: fetch from stack and push into q
    while(!s.empty()){
        int val=s.top();
        s.pop();
        q.push(val);
    }
    // step 3 fetch first (n-k) element from Q and push back
    int t=q.size()-k;
    while(t--){
        int val=q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main() {
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    modifyQueue(q,3);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

    return 0;
}
