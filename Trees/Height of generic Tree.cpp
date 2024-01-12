Problem statement
Given a generic tree, find and return the height of given tree. The height of a tree is defined as the longest distance from root node to any of the leaf node. Assume the height of a tree with a single node is 1.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1:
3





  #include<vector>

int getHeight(TreeNode<int>* root) {
    // Write your code here
    //corner case 
    if(root == NULL) {
        return 0;
    }
    int count = 0;
	
    for(int i = 0; i < root ->children.size(); i++) {
        int temp = getHeight(root -> children[i]);
        count = max(temp,count);
    }
    return count + 1;
}
