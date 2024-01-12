Problem statement
Given two generic trees, return true if they are structurally identical. Otherwise return false.

Structural Identical
If the two given trees are made of nodes with the same values and the nodes are arranged in the same way, then the trees are called identical.  
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 20 30 40 2 40 50 0 0 0 0
Sample Output 1 :
true
Sample Input 2 :
10 3 20 30 40 2 40 50 0 0 0 0 
10 3 2 30 40 2 40 50 0 0 0 0
Sample Output 2:
false












  #include<vector>

bool areIdentical(TreeNode<int> *root1, TreeNode<int> * root2) {
    // Write your code here
    //corner case
    if(root1 == NULL and root2 == NULL) {
        return true;
    }
    if((root1 == NULL and root2 != NULL) or (root1 != NULL and root2 == NULL)) {
        return false;
    }
    
    if((root1 -> data != root2 -> data) or (root1 -> children.size() != root2 -> children.size())) {
        return false;
    }
    
    bool flag = true;
    
    for(int i = 0; i < root1 -> children.size(); i++) {
        flag = areIdentical(root1 -> children[i], root2 -> children[i]);
        if(!flag) {
            return false;
        }
    }
    
    if(root1 -> data == root2 -> data) {
        return true;
    } else {
        return false;
    }
}

