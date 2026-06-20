// Platform: Geeksforgeeks
// Difficulty: Medium
// Time Complexity: O(n^2)
// Space Complexity: O(n)

// Frist non repeating character in stream

#include <iostream>
#include<unordered_map>
#include<stack>
#include<queue>
using namespace std;

string FirstNonRepeating(string A){
    unordered_map<char, int>count;
    queue<int>q;
    string ans="";
    for(int i=0;i<A.length();i++){
        char ch=A[i];
        // increase count
        count[ch]++;
        // push in the queue
        q.push(ch);
        while(!q.empty()){
            if(count[q.front()]>1){
                // repeating char
                q.pop();
            }
            else{
                // non repeating character
                ans.push_back(q.front());
                break;
            }
        }
        if(q.empty()){
            ans.push_back('#');
        }


    }
    return ans;
}

int main() {
    string str1="aabc";
    string ans=FirstNonRepeating(str1);
    cout<<ans<<endl;
    return 0;
}
