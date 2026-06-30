// Count total number of node in a Binary tree
#include <iostream>
#include<queue>
using namespace std;

class node{
    public:
    int data;
    node* left;
    node* right;
    node(int data){
        this->data=data;
        this->right=NULL;
        this->left=NULL;
    }
};
node* buildTree(node* root){
    int data;
    cout<<"Enter the data:\n";
    cin>>data;
    if(data==-1){
        return NULL;
    }
    root= new node(data);
    cout<<"Enter data for insert in left:\n";
    root->left=buildTree(root->left);
    cout<<"Enter data for insert in right:\n";
    root->right=buildTree(root->right);
    return root;
}

int totalNode(node*root){
    queue<node*>q;
    q.push(root);
    
    if(root==NULL){
        return 0;
    }
    int count=0;

    while(!q.empty()){
        node* temp=q.front();
        q.pop();
        count++;
            if(temp->left){
                q.push(temp->left);
                
            }
            if(temp->right){
                q.push(temp->right);
               
            }
        
    }
    return count;
}

int main() {
    node* root=NULL;
    root=buildTree(root);
    // 1 2 4 -1 -1 6 -1 -1 3 5 -1 -1 -1
    cout<<totalNode(root)<<endl;
    return 0;
}
