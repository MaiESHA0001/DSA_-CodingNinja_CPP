Problem statement
Given a binary tree, print the zig zag order. In zigzag order, level 1 is printed from left to right, level 2 from right to left and so on. This means odd levels should get printed from left to right and even level right to left.

Detailed explanation ( Input/output format, Notes, Images )
Constraints
Time Limit: 1 second
Sample Input :
5 6 10 2 3 -1 -1 -1 -1 -1 9 -1 -1
Sample Output :
5
10 6
2 3
9









  #include<stack>
void zigZagOrder(BinaryTreeNode<int> *root) {
    // Write your code here
    //corner case
    if(root == NULL) {
        return;
    }
    
    stack<BinaryTreeNode<int>*> oddLevel;  // At odd level we print from left to right
    stack<BinaryTreeNode<int>*> evenLevel; // At odd level we print from right to left
    
    oddLevel.push(root); // considering root at level 1
    
    
    while(oddLevel.size() or evenLevel.size()) {
        while(oddLevel.size()) {
        	BinaryTreeNode<int> *top = oddLevel.top();
            cout << top -> data << " ";
            oddLevel.pop();
            
            if(top -> left) {
                evenLevel.push(top -> left);
            }
            if(top -> right) {
                evenLevel.push(top -> right);
            }
            if(oddLevel.empty()){
                cout << endl;
            }
        }
         
        while(evenLevel.size()) {
        	BinaryTreeNode<int> *top = evenLevel.top();     
        	cout << top -> data << " ";
            evenLevel.pop();
            
            if(top -> right) {
                oddLevel.push(top -> right);
            }
            if(top -> left) {
                oddLevel.push(top -> left);
            }
            if(evenLevel.empty()) {
                cout << endl;
            }
        }
    }

    return;
}    

