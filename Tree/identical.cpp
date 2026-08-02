// Problem: Check that both tree is identical or not
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach:Recursivly
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

bool isIdentical(Node*r1,Node*r2){
    // base case
    if(r1==NULL && r2==NULL){
        return true;
    }
    if(r1==NULL && r2!=NULL){
        return false;
    }
    if(r1 !=NULL && r2==NULL){
        return false;
    }

    bool left=isIdentical(r1->left,r2-left);
    bool right=isIdentical(r1->right,r2->right);

    bool value=r1->data==r2->data;

    if(left && right && value){
        return true;
    }
    else{
        return false;
    }
}

int main(){
    Node*root1=NULL;
    Node*root2=NULL;
    // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 -1
    root1=buildTree(root1);
    root2=buildTree(root2);
    cout<<"\nCheck Identical:"<<isIdentical(root1,root2);
    return 0;
}

