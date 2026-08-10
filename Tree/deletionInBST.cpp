// Problem: Searc a node in a Binary Search Tree
// Platform: Code Studio
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(h)

int maxValue(Node* root){
    Node* temp=root;
    while(temp->left!=NULL){
        temp=temp->left;
    }
    return temp->data;
}

// Minimum Value
int minValue(Node* root){
    Node* temp=root;
    while(temp->right!=NULL){
        temp=temp->right;
    }
    return temp->data;
}
// Deletion
Node* deleteFromBST(Node* root, int val){
    // Base case
    if(root==NULL){
        return root;
    }
    if(root->data==val){
        // 0 child
        if(root->left==NULL && root->right==NULL){
            delete root;
            return NULL;
        }
        // 1 child
        // Left child
        if(root->left !=NULL && root->right ==NULL){
            Node* temp=root->left;
            delete root;
            return temp;
        }
        // Right Child
        if(root->right !=NULL && root->left ==NULL){
            Node* temp=root->right;
            delete root;
            return temp;
        }
        // 2 child
        if(root->left !=NULL && root->right !=NULL){
            int mini=(minValue(root->right));
            root->data=mini;
            root->right=deleteFromBST(root->right,mini);

        }
    }
    else if(root->data>val){
        // search in the left part
        root->left=deleteFromBST(root->left,val);
        return root;
    }
    else{
        // search in the right part
        root->right=deleteFromBST(root->right,val);
        return root;
    }
}
