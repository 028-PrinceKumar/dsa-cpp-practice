// Problem: LCA in BST using iteration which reduce the space complexity
// Platform: Code Studio
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(1)

Node* LCAinaBST(Node* root, Node* P, Node* Q){
    
    while(root !=NULL){
        if(root->data<P->data && root->data<Q->data){
            root=root->right;
        }
        else if(root->data>P->data && root->data>Q->data){
            root=root->left;
        }
        else{
            return root;
        }
    }
}
