Problem statement
Given a singly linked list of integers, sort it using 'Bubble Sort.'

Note :
No need to print the list, it has already been taken care. Only return the new head to the list.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= M <= 10^3
Where M is the size of the singly linked list.

Time Limit: 1sec
Sample Input 1 :
10 9 8 7 6 5 4 3 -1
Sample Output 1 :
 3 4 5 6 7 8 9 10 
 Sample Input 2 :
10 -5 9 90 5 67 1 89 -1
Sample Output 2 :
-5 1 5 9 10 67 89 90 













  int length(Node *head) {
    if(head == NULL) {
        return 0;
    }
    return 1 + length(head -> next);
}

Node *bubbleSort(Node *head) {
    
    for(int i = 0; length(head) > i; i++) { 
        Node *prev = NULL;
        Node *curr = head;
        while(curr -> next) {
            
            if(curr -> data > curr -> next -> data) {
                if(prev) {
                    Node *temp = curr -> next -> next;
                    curr -> next -> next = curr;
                    prev -> next = curr -> next;
                    curr -> next = temp;
                    prev = prev -> next;
                } else {
                    head = curr -> next;
                    curr -> next = head -> next;
                    head -> next = curr;
                    prev = head;
                }
            } else { 
                prev = curr;
                curr = curr -> next;
            }
        }
    }
    return head;
}


