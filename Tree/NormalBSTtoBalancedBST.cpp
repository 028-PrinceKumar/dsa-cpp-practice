// Problem: Normal BST to Balanced BST
// Platform: Code Studio
// Difficulty: Medium
// Approach:Recursively
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(n)

void inorder(Node* root, vector<int>&in){
    if(root==NULL){
        return ;
    }
    inorder(root->left,in);
    in.push_back(root->data);
    inorder(root->right,in);
}

Node* inorderToBST(int s, int e,vector<int> inorderVal){
    // base case
    if(s>e){
        return NULL;
    }
    int mid=(s+e)/2;
    Node* root=new Node(inorderVal[mid]);
    root->left=inorderToBST(s,mid-1,inorderVal);
    root->right=inorderToBST(mid+1,e,inorderVal);
    return root;
}

Node* balancedBST(Node* root){
    vector<int>inorderVal;
    // Store inorder->sorted values
    inorder(root,inorderVal);
    return inorderToBST(0,inorderVal.size()-1, inorderVal);

}
