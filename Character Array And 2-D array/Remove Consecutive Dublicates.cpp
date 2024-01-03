/*
Problem statement
For a given string(str), remove all the consecutive duplicate characters.

Example:
Input String: "aaaa"
Expected Output: "a"

Input String: "aabbbcc"
Expected Output: "abc"
 Input Format:
The first and only line of input contains a string without any leading and trailing spaces. All the characters in the string would be in lower case.
Output Format:
The only line of output prints the updated string.
Note:
You are not required to print anything. It has already been taken care of.
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aabccbaa
Sample Output 1:
abcba
Sample Input 2:
xxyyzxx
Sample Output 2:
xyzx
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int length = strlen(input);
    if (length <= 1) {
        return;  // No duplicates to remove
    }

    int newIndex= 0;
    for (int i = 1; i < length; i++) {
        if (input[i] != input[newIndex]) {

*/
void removeConsecutiveDuplicates(char input[]) {
    // Write your code here
    int length = strlen(input);
    if (length <= 1) {
        return;  // No duplicates to remove
    }

    int newIndex= 0;
    for (int i = 1; i < length; i++) {
        if (input[i] != input[newIndex]) {
            newIndex++;
            input[newIndex] = input[i];
        }
    }
    newIndex++;
    input[newIndex] = '\0';  // Terminate the new string after removing duplicates
}


/* main code */

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    int size = 1e6;
    char str[size];
    cin >> str;
    removeConsecutiveDuplicates(str);
    cout << str;
}
