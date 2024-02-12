Problem statement
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to print the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. Just print them in different lines.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= Length of String S <= 10

Sample Input:
1123
Sample Output:
aabc
kbc
alc
aaw
kw















#include <iostream>
#include <string>
using namespace std;

void generateCodes(string input, string output) {
    // Base case: If the input string is empty, print the generated output
    if (input.empty()) {
        cout << output << endl;
        return;
    }

    // Consider the first character of the input string and generate code
    int num = input[0] - '0'; // Convert char to int
    char ch = 'a' + num - 1; // Convert int to char representing the alphabet

    // Generate code by considering the current character
    generateCodes(input.substr(1), output + ch);

    // Consider the first two characters if they form a valid code
    if (input.size() >= 2) {
        int numTwoDigits = stoi(input.substr(0, 2)); // Convert substring to int
        if (numTwoDigits >= 10 && numTwoDigits <= 26) {
            char chTwoDigits = 'a' + numTwoDigits - 1; // Convert int to char representing the alphabet
            generateCodes(input.substr(2), output + chTwoDigits);
        }
    }
}

void printAllPossibleCodes(string input) {
    generateCodes(input, "");
}


















#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;

    printAllPossibleCodes(input);
    return 0;
}


