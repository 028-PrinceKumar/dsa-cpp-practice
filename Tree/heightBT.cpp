// Problem: Height of Binary Tree
// Platform: GeeksgorGeeks
// Difficulty: Easy
// Approach:Rescursion
// Time Complexity: O(n)
// Space Complexity: O(h)
//in worst cases S.C: O(n)

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

int height(Node* node){
    if(node==NULL){
        return 0;
    }
    int left=height(node->left);
    int right=height(node->right);
    int ans=max(left,right)+1;
    return ans;

}


int main(){
    Node*root=NULL;
    // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 -1
    root=buildTree(root);
    cout<<"\nHeight of tree is:"<<height(root);
    return 0;
}

