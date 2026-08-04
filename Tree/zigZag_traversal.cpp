// Problem: Zig Zag traverssal of tree
// Platform: GeeksforGeeks
// Difficulty: Easy
// Approach:Recursive
// Time Complexity: O(n)
// Space Complexity: O(n)

vector<int>zigZagTraversal(Node* root){
    vector<int>result;
    if(root==NULL){
        return result;
    }
    queue<Node*>q;
    q.push(root);
    bool leftToRight=true;
    while(!q.empty()){
        int size=q.size();
        vector<int>ans(size);

        // Level Process
        for(int i=0;i<size;i++){
            Node* frontNode=q.front();
            q.pop();

            // Normal insert or reverse insert
            int index=leftToRight?i:size-i-1;
            ans[index]=frontNode->data;
            if(frontNode->left){
                q.push(frontNode->left);
            }
            if(frontNode->right){
                q.push((frontNode->right));
            }
            
        }
        //For change the Direction
        leftToRight=!leftToRight;
        for(auto i:ans){
            result.push_back(i);
        }

    }
    return result;


}

