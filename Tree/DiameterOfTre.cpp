// Problem:Calculate the diameter of tree
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach:Recursive
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

pair<int,int>diameterFast(Node* root){
    // base case
    if(root==NULL){
        pair<int,int>p=make_pair(0,0);
        return p;
    }
    pair<int,int>left=diameterFast(root->left);
    pair<int,int>right=diameterFast(root->right);

    int op1=left.first;
    int op2=right.first;
    int op3=left.second+right.second+1;
    pair<int,int>ans;
    ans.first=max(op1,max(op2,op3));
    ans.second=max(left.second,right.second)+1;
    return ans;
}
int diameter(Node* root){
    return diameterFast(root).first;
}
int main(){
    Node*root=NULL;
    // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 -1
    root=buildTree(root);
    cout<<"\nDiameter of tree is:"<<diameter(root);
    return 0;
}
