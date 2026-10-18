// Reverse the sentence
// i/p= i.like.this.program.very.much
// o/p=much.very.program.this.like.i

#include <iostream>
#include<algorithm>
#include<string>
using namespace std;

string reverseWords(string s){
    string ans="";
    string temp="";
    for(int i=s.length()-1;i>=0;i--){

        if(s[i]=='.'){
        reverse(temp.begin(),temp.end());
        ans=ans+temp;
        ans.push_back('.');
        temp="";
        }
        else{
            temp.push_back(s[i]);
        }
    }
    reverse(temp.begin(),temp.end());
    ans=ans+temp;
    return ans;
}

int main() {
    string str="i.like.this.program.very.much";
    string ans=reverseWords(str);
    cout<<ans<<endl;
    return 0;
}
