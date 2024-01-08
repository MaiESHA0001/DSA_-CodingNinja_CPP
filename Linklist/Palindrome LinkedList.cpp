Problem statement
You have been given a head to a singly linked list of integers. Write a function check to whether the list given is a 'Palindrome' or not.

Detailed explanation ( Input/output format, Notes, Images )
 Constraints :
1 <= t <= 10^2
0 <= M <= 10^5
Time Limit: 1sec

Where 'M' is the size of the singly linked list.
Sample Input 1 :
1
9 2 3 3 2 9 -1
Sample Output 1 :
true
Sample Input 2 :
2
0 2 3 2 5 -1
-1
Sample Output 2 :
false
true
Explanation for the Sample Input 2 :
For the first query, it is pretty intuitive that the the given list is not a palindrome, hence the output is 'false'.

For the second query, the list is empty. An empty list is always a palindrome , hence the output is 'true'.
#include <iostream>
#include <stack>




bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true; // An empty list or a single-element list is a palindrome.
    }























#include <iostream>
#include <stack>




bool isPalindrome(Node* head) {
    if (head == nullptr || head->next == nullptr) {
        return true; // An empty list or a single-element list is a palindrome.
    }

    // Step 1: Find the middle of the linked list using two pointers.
    Node* slow = head;
    Node* fast = head;
    std::stack<int> first_half;

    while (fast != nullptr && fast->next != nullptr) {
        first_half.push(slow->data);
        slow = slow->next;
        fast = fast->next->next;
    }

    // If the list has an odd number of elements, skip the middle element.
    if (fast != nullptr) {
        slow = slow->next;
    }

    // Step 2: Reverse the second half of the linked list.
    while (slow != nullptr) {
        if (slow->data != first_half.top()) {
            return false; // Compare with the first half.
        }
        slow = slow->next;
        first_half.pop();
    }

    // If all elements matched, it's a palindrome.
    return true;
}


           

   
