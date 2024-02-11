Problem statement
Given a string S, compute recursively a new string where identical chars that are adjacent in the original string are separated from each other by a "*".

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= |S| <= 1000
where |S| represents length of string S.
Sample Input 1 :
hello
Sample Output 1:
hel*lo
Sample Input 2 :
aaaa
Sample Output 2 :
a*a*a*a


















  // Change in the given string itself. So no need to return or print the changed string.

void pairStar(char input[]) {
    // Write your code here
 if(input[0] == '\0') {
        return;  // Base case: reached end of the string
    }

    // Check if the current character is the same as the next one
    if(input[0] == input[1]) {
        int len = 0;
        while(input[len] != '\0') {
            len++;
        }

        // Shift all characters to the right to make space for '*'
        for(int i = len; i >= 1; i--) {
            input[i+1] = input[i];
        }

        // Insert '*'
        input[1] = '*';
    }

    // Recur for the rest of the string
    pairStar(input+1);
}





















#include <iostream>
#include "solution.h"
using namespace std;

int main() {
   char input[100];
   cin.getline(input, 100);
   pairStar(input);
   cout << input << endl;
}


