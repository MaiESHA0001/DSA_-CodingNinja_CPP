Problem statement
Given a generic tree, find and return the node for which sum of its data and data of all its child nodes is maximum. In the sum, data of the node and data of its immediate child nodes has to be taken.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
0 < Node's val <= 10^5
Sample Input 1 :
5 3 1 2 3 1 15 2 4 5 1 6 0 0 0 0


Sample Output 1 :
1





  #include<vector>
#include<utility>

pair<TreeNode<int>*,int> helper(TreeNode<int>* root) {
    
    int sum = root -> data;
    TreeNode<int> *ans = root;
    
    for(int i = 0 ; i < root -> children.size(); i++) {
        sum += root -> children[i] -> data;
    }
    
	for(int i = 0 ; i < root -> children.size(); i++) {
     	  pair<TreeNode<int>*,int> temp  = helper(root -> children[i]);
          if(temp.second > sum) {
              ans = temp.first;
              sum = temp.second;
          }	
    }
    
    return {ans,sum};
    
}
TreeNode<int>* maxSumNode(TreeNode<int>* root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return root;
    }
  	 return helper(root).first;
}
