// Problem: Find total no. of leaf node in a tree
// Platform: CodeStudio
// Difficulty: Easy
// Approach: Recursive
// Time Complexity: O(n)
// Space Complexity: O(1)

// Count the total number of leaf node in a tree
#include <iostream>
using namespace std;

// Binary Tree Node
template <typename T>
class BinaryTreeNode {
public:
    T data;
    BinaryTreeNode<T>* left;
    BinaryTreeNode<T>* right;

    BinaryTreeNode(T data) {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};

// Build Tree (Preorder)
// Enter -1 for NULL
BinaryTreeNode<int>* buildTree() {
    int data;
    cin >> data;

    if (data == -1)
        return NULL;

    BinaryTreeNode<int>* root = new BinaryTreeNode<int>(data);

    root->left = buildTree();
    root->right = buildTree();

    return root;
}

// Count Leaf Nodes
void inorder(BinaryTreeNode<int>* root, int &count) {

    if (root == NULL)
        return;

    inorder(root->left, count);

    if (root->left == NULL && root->right == NULL)
        count++;

    inorder(root->right, count);
}

int noOfLeafNodes(BinaryTreeNode<int>* root) {

    int cnt = 0;
    inorder(root, cnt);

    return cnt;
}

int main() {

    cout << "Enter tree in preorder (-1 for NULL):" << endl;

    BinaryTreeNode<int>* root = buildTree();

    cout << "Number of Leaf Nodes = " << noOfLeafNodes(root);

    return 0;
}
