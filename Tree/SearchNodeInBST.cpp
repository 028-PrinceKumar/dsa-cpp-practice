// Problem: Searc a node in a Binary Search Tree
// Platform: Code Studio
// Difficulty: Easy
// Approach:Iterative
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(1)
bool searchInBST(Node* root,int x){
    Node* temp=root;
    while(temp!=NULL){
        if(temp->data==x){
            return true;
        }
        if(temp->data>x){
            temp=temp->left;
        }
        else{
            temp=temp->right;
        }
        return false;

    }
    
}
