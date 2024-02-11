Problem statement
Given a string, compute recursively a new string where all 'x' chars have been removed.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^3
where |S| represents the length of string S. 
Sample Input 1 :
xaxb
Sample Output 1:
ab
Sample Input 2 :
abc
Sample Output 2:
abc
Sample Input 3 :
xx
Sample Output 3:
















  // Change in the given string itself. So no need to return or print anything

void removeX(char input[]) {
    // Write your code here
 if (input[0] == '\0') {
        return; // Base case: end of string reached
    }

    if (input[0] != 'x') {
        // If the current character is not 'x', move to the next character
        removeX(input + 1);
    } else {
        // If the current character is 'x', shift the string to remove 'x'
        int i = 0;
        while (input[i] != '\0') {
            input[i] = input[i + 1];
            i++;
        }
        removeX(input); // Call the function recursively with the modified string
    }

}


















#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[100];
    cin.getline(input, 100);
    removeX(input);
    cout << input << endl;
}


