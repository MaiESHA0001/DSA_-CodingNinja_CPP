Problem statement
Given a binary tree, remove all leaf nodes from it. Leaf nodes are those nodes, which don't have any children.

Note:

1. Root will also be a leaf node if it doesn't have left and right child. 
2. You don't need to print the tree, just remove all leaf nodes and return the updated root.
Detailed explanation ( Input/output format, Notes, Images )
Constraints
Time Limit: 1 second
Sample Input 1:
8 3 10 1 6 -1 14 -1 -1 4 7 13 -1 -1 -1 -1 -1 -1 -1
Sample Output 1:
8
3 10
6 14                    













  BinaryTreeNode<int>* removeLeafNodes(BinaryTreeNode<int> *root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return root;
    }
    // A node will be leaf if it has no children
    if(!root -> left and !root -> right) {
        return NULL;
    }
    
    root -> left = removeLeafNodes(root -> left);
    root -> right = removeLeafNodes(root -> right);
    
    return root;
}

