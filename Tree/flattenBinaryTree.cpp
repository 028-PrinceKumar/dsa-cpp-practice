// Problem: Flatten a Binary Tree to Linked List
// Platform: GeeksforGeeks
// Difficulty: Hard
// Approach:Recursive
// Time Complexity: O(n)
// Space complexity: O(1)

void flatten(Node* root){
    Node* curr=root;
    while(curr!=NULL){
        if(curr->left){
            Node* pred=curr->left;
            while(pred->right){
                pred=pred->right;
            }
            pred->right=curr->right;
            curr->right=curr->left;
            curr->left=NULL;
        }
        curr=curr->right;
    }
}
