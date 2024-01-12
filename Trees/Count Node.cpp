Problem statement
Given a tree and an integer x, find and return the number of nodes which contains data greater than x.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0
35 
Sample Output 1 :
3
Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0
10 
Sample Output 2:
5










  int getLargeNodeCount(TreeNode<int>* root, int x) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return 0;
    }
    int count = 0;
    
    for(int i = 0; i < root -> children.size(); i++) {
        count += getLargeNodeCount(root -> children[i], x);
    }
    
    if(root -> data > x) {
        return count + 1;
    } else {
        return count;
    }
}




