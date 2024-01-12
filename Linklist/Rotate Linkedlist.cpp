Problem statement
You are given a linked list having ‘n’ nodes and an integer ‘k’.



You have to rotate the linked list to the right by ‘k’ positions .



Example :
Input: linked list = [1 2 3 4] , k = 2

Output: 3 4 1 2

Explanation:
We have to rotate the given linked list to the right 2 times. After rotating it to the right once it becomes 4->1->2->3. After rotating it to the right again, it becomes 3->4->1->2. 


Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6
1 2 3 4 5 6
2


Sample Output 1 :
5 6 1 2 3 4


Explanation For Sample Input 1 :
For the first test case, after 1st clockwise rotation the modified linked list will be : 6->1->2->3->4->5
After, 2nd clockwise rotated the modified linked list will be : 5->6->1->2->3->4.
Thus the output is: 5 6 1 2 3 4.


Sample Input 2 :
3
3 6 9 
0


Sample Output 2:
3 6 9


Explanation For Sample Input 2 :
In this test case, ‘k’ is 0 therefore there will be no rotation, so the linked list remains unchanged.


Expected Time Complexity:
Try to do this in O(n).


Constraints :
1 <= n <= 10^5
0 <= Node.data <= 10^9 
0 <= k <= 10^5

Time Limit: 1 sec


/**
 * Definition for singly-linked list.
 * class Node {
 * public:
 *     int data;
 *     Node *next;
 *     Node() : data(0), next(nullptr) {}
 *     Node(int x) : data(x), next(nullptr) {}
 *     Node(int x, Node *next) : data(x), next(next) {}
 * };
 */

Node *rotate(Node *head, int k) {
     // Write your code here.
      if (!head || k == 0) {
        return head;
    }

    // Step 1: Find the length of the linked list
    int length = 1;
    Node* tail = head;
    while (tail->next) {
        tail = tail->next;
        length++;
    }

    // Step 2: Calculate the actual rotation position
    k = k % length;
    if (k == 0) {
        return head; // No rotation needed
    }

    // Step 3: Traverse to the (n - k)th node
    Node* newTail = head;
    for (int i = 1; i < length - k; ++i) {
        newTail = newTail->next;
    }

    // Step 4: Update pointers to rearrange the linked list
    Node* newHead = newTail->next;
    newTail->next = nullptr; // Set the newTail's next to null
    tail->next = head; // Connect the original tail to the original head

    return newHead;

}
