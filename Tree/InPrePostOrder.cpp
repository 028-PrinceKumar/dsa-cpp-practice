//Implementation of Inoreder , Preorder, and Post order

#include <iostream>
using namespace std;
// Inorder
// Preorder
// Postorder

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};


node* buildTree(node*root){
    cout<<"Enter the data: "<<endl;
    int data;
    cin>>data;
    root=new node(data);
    if(data==-1){
        return NULL;
    }
    cout<<"Enter data for inserting in left:"<<endl;
    root->left=buildTree(root->left);
    cout<<"Enter data for inserting in right:"<<endl;
    root->right=buildTree(root->right);
    return root;
}

// Inorder

void inorder(node* root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

// Preorder

void preorder(node* root){
    if(root==NULL){
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}

// postorder

void postorder(node* root){
    if(root==NULL){
        return ;
    }
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

int main() {
    node* root=NULL;
    root= buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1
    cout<<"Inorder traversal is: ";
    inorder(root);
    cout<<endl;
    preorder(root);
    cout<<endl;
    postorder(root);
    cout<<endl;
    return 0;
}

