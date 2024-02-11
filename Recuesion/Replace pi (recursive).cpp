Problem statement
Given a string, compute recursively a new string where all appearances of "pi" have been replaced by "3.14".

Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Constraints :
1 <= |S| <= 50
where |S| represents the length of string S. 
Sample Input 1 :
xpix
Sample Output :
x3.14x
Sample Input 2 :
pipi
Sample Output :
3.143.14
Sample Input 3 :
pip
Sample Output :
3.14p
Constraints:-
1<=|S|<=50



























  // Change in the given string itself. So no need to return or print anything

void replacePi(char input[]) {
	// Write your code here

 // Base case: if the string is empty or has only one character
    if (input[0] == '\0' || input[1] == '\0') {
        return;
    }

    // If the first two characters are 'p' and 'i'
    if (input[0] == 'p' && input[1] == 'i') {
        // Shift characters to the right to make space for "3.14"
        int i = 2;
        while (input[i] != '\0') {
            i++;
        }
        while (i >= 2) {
            input[i+2] = input[i];
            i--;
        }

        // Replace "pi" with "3.14"
        input[0] = '3';
        input[1] = '.';
        input[2] = '1';
        input[3] = '4';

        // Recur for the remaining string
        replacePi(input + 4);
    } else {
        // If no replacement is needed, move to the next character
        replacePi(input + 1);
    }
}




















#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    char input[10000];
    cin.getline(input, 10000);
    replacePi(input);
    cout << input << endl;
}



