/*
Problem statement
For a given input string(str), find and return the total number of words present in it.

It is assumed that two words will have only a single space in between. Also, there wouldn't be any leading and trailing spaces in the given input string.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 sec
Sample Input 1:
Coding Ninjas!
Sample Output 1:
2
Sample Input 2:
this is a sample string
Sample Output 2:
5
int countWords(string str) {
	// Write your code here
	 int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            if (inWord) {
                count++;
                inWord = false;

*/
int countWords(string str) {
	// Write your code here
	 int count = 0;
    bool inWord = false;

    for (char c : str) {
        if (c == ' ') {
            if (inWord) {
                count++;
                inWord = false;
            }
        } else {
            inWord = true;
        }
    }

    // If the last character is not a space and there was a word, increment the count
    if (inWord) {
        count++;
    }

    return count;
}




#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    string str;
    getline(cin, str);
    cout << countWords(str);
}
