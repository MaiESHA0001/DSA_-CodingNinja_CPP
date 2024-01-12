Problem statement
Given a generic tree, find and return the sum of all nodes present in the given tree.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1:
10 3 20 30 40 2 40 50 0 0 0 0 
Sample Output 1:
190



  

#include<vector>
int sumOfNodes(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return 0;
    }
    int sum = root -> data;
    
    for(int i = 0; i < root -> children.size(); i++) {
        sum += sumOfNodes(root -> children[i]);
    }
    return sum;
}
