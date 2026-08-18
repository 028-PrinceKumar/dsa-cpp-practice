// Problem: Check that tree is balanced or not
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach: Recursivley
// Time Complexity: O(n)
// Space Complexity: O(n^2)

class info{
    public:
    int maxi;
    int mini;
    bool isBST;
    int size;
};

info solve(Node* root, int &ans){
    //Base case

    if(root==NULL){
        return{INT8_MIN,INT8_MAX,true,0};

    }
    info left=solve(root->left,ans);
    info right=solve(root->right,ans);
    info currNode;
    currNode.size=left.size+right.size+1;
    currNode.maxi=max(root->data,left.maxi);
    currNode.mini=min(root->data,left.mini);

    if(left.isBST && right.isBST && (root->data> left.maxi && root->data <right.mini)){
        currNode.isBST=true;
    }
    else{
        currNode.isBST=false;
    }

    // Updata the answer
    if(currNode.isBST){
        ans=max(ans,currNode.size);
    }
    return currNode;
}


int largestBST(Node* root){
    int maxSize=0;
    info temp=solve(root,maxSize);
    return maxSize;
}
