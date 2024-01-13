Problem statement
Given a binary tree, check if it is balanced. Return true if given binary tree is balanced, false otherwise.

Balanced Binary Tree:
A empty binary tree or binary tree with zero nodes is always balanced. For a non empty binary tree to be balanced, following conditions must be met:
1. The left and right subtrees must be balanced.
2. |hL - hR| <= 1, where hL is the height or depth of left subtree and hR is the height or depth of right subtree.    
Detailed explanation ( Input/output format, Notes, Images )
Constraints
Time Limit: 1 second
Sample Input 1 :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output 1 :
false
Sample Input 2 :
1 2 3 -1 -1 -1 -1
Sample Output 2 :
true















  int height(BinaryTreeNode<int> *root) {
    if(root == NULL) {
        return 0;
    }
    
    return 1 + max(height(root -> left), height(root -> right));
}
bool isBalanced(BinaryTreeNode<int> *root) {
	// Write your code here
    // corner case
    if(root == NULL) {
        return true;
    }
    
    int left = height(root -> left);
    int right = height(root -> right);
    
    int difference = abs(left - right);
    
    if(difference <= 1 and isBalanced(root -> left) and isBalanced(root -> right)){
        return true;
    }
    return false;
}

