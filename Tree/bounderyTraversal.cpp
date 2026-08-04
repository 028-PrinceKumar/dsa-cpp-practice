// Problem: Boundery traversal of Binary tree
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach:Recursive
// Time Complexity: O(n)
// Space Complexity: O(n)

void traverseLeft(Node* root,vector<int>&ans){
    // base case
    if((root==NULL)||(root->left==NULL && root->right==NULL)){
        return;
    }
    ans.push_back(root->data);
    if(root->left){
        traverseLeft(root->left,ans);
    }
    else{
        traverseLeft(root->right,ans);
    }
}

void traverseLeaf(Node* root,vector<int>&ans){
    // base case
    if(root==NULL){
        return;
    }
    if(root->left==NULL && root->right==NULL){
        ans.push_back(root->data);
        return;
    }
    traverseLeaf(root->left,ans);
    traverseLeaf(root->right,ans);

}

void traverseRight(Node* root,vector<int> & ans){
    // base case
    if((root==NULL)||(root->left==NULL && root->right==NULL)){
        return;
    }
    if(root->right){
        traverseRight(root->right,ans);
    }
    else{
        traverseLeft(root->left,ans);
    }
    // if return
    ans.push_back(root->data);

}

vector<int>boundry(Node* root){
    vector<int>ans;
    if(root==NULL){
        return ans;
    }
    ans.push_back(root->data);

    // left part print/store
    traverseLeft(root->left,ans);

    // traverse Leaf Nodes

    // Leaf subtree
    traverseLeaf(root->left,ans);

    // right subtree
    traverseLeaf(root->right,ans);

    // traverse right part
    traverseRight(root->right,ans);
    return ans;
}

