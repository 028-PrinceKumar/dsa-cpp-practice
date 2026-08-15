// Problem: Predecessor and successor in BST
// Platform: Code Studio
// Difficulty: Medium
// Approach:Iterative
// Time Complexity: O(h) in wrost cases: O(n)
// Space Complexity: O(1)

pair<int ,int>predecessorSuccessor(Node* root,int key){
        // find key
        Node* temp=root;
        int pred=-1;
        int succ=-1;

        while(temp->data !=key){
            if(temp->data>key){
                succ=temp->data;
                temp=temp->left;
                
            }
            else{
                temp=temp->right;
                pred=temp->data;
            }
        }


    // Pred and Succ
    Node* lefttree=temp->left;
    while(lefttree !=NULL){
        pred=lefttree->data;
        lefttree=lefttree->right;
    }

    //succ

    Node* rightTree=temp->right;
    while(rightTree !=NULL){
        succ=rightTree->data;
        rightTree=rightTree->left;
    }
    pair<int,int> ans=make_pair(pred,succ);
    return ans;
}
