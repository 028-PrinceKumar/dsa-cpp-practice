// Problem: Check that tree is sum tree or not
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach:Recursively
// Time Complexity: O(n)
// Space Complexity: O(n)

#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* right;
    Node* left;
    Node(int data){
        this->data=data;
        this->right=right;
        this->left=left;

    }
};


Node* buildTree(Node* root){
    int data;
    cout<<"Enter the data:";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root=new Node(data);
    cout<<"Enter data for insert in left:\n";
    root->left=buildTree(root->left);
    cout<<"Enter data for insert in right:\n";
    root->right=buildTree(root->right);
    return root;
}

pair<bool,int>isSumTreeFast(Node* root){
    // base case
    if(root==NULL){
        pair<bool,int>p=make_pair(true,0);
        return p;
    }
    // check for null or empty node
    if(root->left==NULL && root->right==NULL){
        pair<bool,int>p=make_pair(true,root->data);
        return p;
    }
    pair<bool,int>leftAns=isSumTreeFast(root->left);
    pair<bool,int>rightAns=isSumTreeFast(root->right);

    bool left=leftAns.first;
    bool right=rightAns.first;

    bool condn=root->data==leftAns.second+rightAns.second;
    pair<bool,int>ans;

    if(left && right && condn){
        ans.first=true;
        ans.second=2* root->data;
    }
    else{
        ans.first=false;
    }
    return ans;

}
bool isSumTree(Node* root){
    return isSumTreeFast(root).first;
}

int main(){
    Node*root=NULL;
    // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 -1
    root=buildTree(root);
    cout<<"\nCheck Sum tree or not :"<<isSumTree(root);
    return 0;
}

