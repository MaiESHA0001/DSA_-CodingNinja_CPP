Problem statement
Assume that the value of a = 1, b = 2, c = 3, ... , z = 26. You are given a numeric string S. Write a program to return the list of all possible codes that can be generated from the given string.

Note : The order of codes are not important. And input string does not contain 0s.
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

char getChar(int n) {
    return (char)('a' + n - 1);
}

int getCodesUtil(string input, string output[], int k, string current) {
    if (input.empty()) {
        output[k++] = current;
        return k;
    }

    int firstDigit = input[0] - '0';
    k = getCodesUtil(input.substr(1), output, k, current + getChar(firstDigit));

    if (input.size() >= 2) {
        int firstTwoDigits = stoi(input.substr(0, 2));
        if (firstTwoDigits <= 26) {
            k = getCodesUtil(input.substr(2), output, k, current + getChar(firstTwoDigits));
        }
    }

    return k;
}

int getCodes(string input, string output[10000]) {
    if (input.empty()) return 0;

    return getCodesUtil(input, output, 0, "");
}











#include <iostream>
#include "solution.h"
using namespace std;

int main(){
    string input;
    cin >> input;

    string output[10000];
    int count = getCodes(input, output);
    for(int i = 0; i < count && i < 10000; i++)
        cout << output[i] << endl;
    return 0;
}


