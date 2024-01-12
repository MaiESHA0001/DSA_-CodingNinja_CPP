Problem statement
Given a generic tree, print the post-order traversal of given tree.

The post-order traversal is: visit child nodes first and then root node.


For the given tree, the post order traversal will be 40 50 20 30 40 10
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1:
10 3 20 30 40 2 400 50 0 0 0 0 
Sample Output 1:
400 50 20 30 40 10










  void printPostOrder(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    for(int i = 0; i < root -> children.size() ; i++) {
        printPostOrder(root -> children[i]);
    }
    
    cout << root -> data << " "; 
}
