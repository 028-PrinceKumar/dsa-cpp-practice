// Platform: Geeg for Geeks
// Difficulty: Easy
// Time Complexity: O(n)
// Space Complexity: O(n)

// Queue Reversal
#include <iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int>rev(queue<int> q){
    stack<int> s;
    while(!q.empty()){
        int el=q.front();
        q.pop();
        s.push(el);
    }
    while(!s.empty()){
        int el=s.top();
        s.pop();
        q.push(el);
    }
    return q;
}

int main() {
    queue<int>q;
    q.push(4);
    q.push(3);
    q.push(1);
    q.push(2);
    q.push(10);
    q.push(6);
    queue<int>ans=rev(q);
    while(!ans.empty()){
        cout<<ans.front()<<" ";
        ans.pop();
    }

    return 0;
}



