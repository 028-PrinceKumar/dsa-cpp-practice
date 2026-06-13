// Problem: Check valid parenthesis
// Platform: CodeStudio
// Difficulty: Easy
// Approach: iterative
// Time Complexity: O(n)
// Space Complexity: O(n)

#include <iostream>
#include<stack>
#include<string>
using namespace std;

bool isValidParenthesis(string expression){
    stack<char>s;
    for(int i=0; i<expression.length();i++){
        char ch=expression[i];
        //if opening bracket
        //if closing bracket , stack check and pop
        if(ch=='(' || ch=='{' || ch=='['){
            s.push(ch);
        }
        else{
            // for closing bracket
            if(!s.empty()){
            char top=s.top();
            if((ch==')' && top=='(')||
            (ch=='}' && top=='{')||
            (ch==']' && top=='[')){
                s.pop();
            }
            else{
                return false;
            }
            }
            else{
            return false;
        }
        }
        
    }
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}
int main() {
    string str1="[()]{}{[()]}{}"; //balanced
    string str2="[(])"; //Unbalanced
    cout<<isValidParenthesis(str2)<<endl;
    return 0;
}
