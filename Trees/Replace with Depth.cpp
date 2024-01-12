Problem statement
You are given a generic tree. You have to replace each node with its depth value. You just have to update the data of each node, there is no need to return or print anything.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1:
0 
1 1 1 
2 2










  void replaceWithDepthValue(TreeNode<int>* root, int level = 0) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    root -> data = level;
    
    for(int i = 0; i < root -> children.size(); i++) {
       replaceWithDepthValue(root -> children[i], level + 1);
    }
    return;
}
