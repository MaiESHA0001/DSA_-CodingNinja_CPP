Problem statement
Given the binary Tree and two nodes say ‘p’ and ‘q’. Determine whether the two nodes are cousins of each other or not. Two nodes are said to be cousins of each other if they are at same level of the Binary Tree and have different parents.

Do it in O(n).

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^5

Sample Input :
5 6 10 2 3 4 -1 -1 -1 -1 9 -1 -1 -1 -1
2
4
Sample Output :
true















bool areSiblings(BinaryTreeNode<int> *root, int p, int q) {
    if(root == NULL) {
        return false;
    }
    
    if(root -> left and root -> right) {
        int left = root -> left -> data;
        int right = root -> right -> data;
        
        if((left == p and right == q) or (left == q or right == p)) {
            return true;
        }   
    } else {
        return false;
    } 
     return areSiblings(root -> left, p, q) or areSiblings(root -> right, p, q);
}

int getLevel(BinaryTreeNode<int> *root, int data, int count) {
    if(root == NULL) {
        return 0;
    } else if(root -> data == data) {
        return count;
    }
    
    int left = getLevel(root -> left, data, count + 1);
    if(left) {
        return left;
    } else {
        return getLevel(root -> right, data, count + 1);
    }
}
bool isCousin(BinaryTreeNode<int> *root, int p, int q) {
    // Write your code here
	if((getLevel(root, p, 1) == getLevel(root, q, 1)) and !areSiblings(root, p, q)) {
        return true;
    } else {
        return false;
    }
}

// Time Complexity : O(n)
// Auxillary Space : O(n)

















#include <iostream>
#include <queue>

template <typename T>
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};

using namespace std;
#include "solution.h"

BinaryTreeNode<int>* takeInput() {
    int rootData;
    //cout << "Enter root data : ";
    cin >> rootData;
    if(rootData == -1) {
        return NULL;
    }
    BinaryTreeNode<int> *root = new BinaryTreeNode<int>(rootData);
    queue<BinaryTreeNode<int>*> q;
    q.push(root);
    while(!q.empty()) {
        BinaryTreeNode<int> *currentNode = q.front();
	q.pop();
        int leftChild, rightChild;
        //cout << "Enter left child of " << currentNode -> data << " : ";
        cin >> leftChild;
        if(leftChild != -1) {
            BinaryTreeNode<int>* leftNode = new BinaryTreeNode<int>(leftChild);
            currentNode -> left =leftNode;
            q.push(leftNode);
        }
        //cout << "Enter right child of " << currentNode -> data << " : ";
        cin >> rightChild;
        if(rightChild != -1) {
            BinaryTreeNode<int>* rightNode = new BinaryTreeNode<int>(rightChild);
            currentNode -> right =rightNode;
            q.push(rightNode);
        }
    }
    return root;
}

void printLevelATNewLine(BinaryTreeNode<int> *root) {
		queue<BinaryTreeNode<int>*> q;
		q.push(root);
		q.push(NULL);
		while(!q.empty()) {
			BinaryTreeNode<int> *first = q.front();
			q.pop();
			if(first == NULL) {
				if(q.empty()) {
					break;
				}
				cout << endl;
				q.push(NULL);
				continue;
			}
			cout << first -> data << " ";
			if(first -> left != NULL) {
				q.push(first -> left);
			}
			if(first -> right != NULL) {
				q.push(first -> right);
			}
		}
}

int main() {
    BinaryTreeNode<int>* root = takeInput();
    int n1, n2;
    cin >> n1 >> n2;
    if(isCousin(root, n1, n2)) {
	    cout << "true" << endl;
    }
    else {
	    cout << "false" << endl;
    }
}
