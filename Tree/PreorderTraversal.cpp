/ Problem: Preorder traversal of a BST
// Platform: Code Studio
// Difficulty: Medium
// Approach:Recursively
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(n)


Node* solve(vector<int>&preorder,int mini, int maxi, int &i){
    if(i>=preorder.size()){
        return NULL;
    }
    if(preorder[i]<mini || preorder[i]>maxi){
        return NULL;
    }
    Node* root=new Node(preorder[i++]);
    root->left=solve(preorder,mini,root->data,i);
    root->right=solve(preorder,root->data,maxi,i);
    return root;
}

Node* preorderToBST(vector<int>&preorder){
    int mini=INT8_MIN;
    int maxi=INT8_MAX;
    int i=0;
    return solve(preorder,mini,maxi,i);
}
