// Problem: Find the Kth smallest number in BST
// Platform: Code Studio
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(h)

int solve(Node* root, int& i, int k){
    // base case
    if(root==NULL){
        return -1;
    }
    // Left
    int left=solve(root->left,i,k);
    if(left !=-1){
        return left;
    }
    i++;
    // Node
    if(i==k){
        return root->data;
    }
    // Right
    return solve(root->right,i,k);
}
int kthSmallest(Node* root,int k){
    int i=0;
    int ans=solve(root,i,k);
}

