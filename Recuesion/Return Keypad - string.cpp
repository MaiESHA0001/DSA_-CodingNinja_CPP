Problem statement
Given an integer n, using phone keypad find out all the possible strings that can be made using digits of input n.

Return empty string for numbers 0 and 1.

Note :
1. The order of strings are not important.
2. Input and output has already been managed for you. You just have to populate the output array and return the count of elements populated in the output array.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= n <= 10^6

Sample Input:
23
Sample Output:
ad
ae
af
bd
be
bf
cd
ce
cf


























#include <iostream>
#include <string>
using namespace std;

string keypadChars[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};

void keypadHelper(int num, string output, string result[], int &count) {
    if (num == 0 || num == 1) {
        result[count++] = output;
        return;
    }

    int digit = num % 10;
    string chars = keypadChars[digit];
    int charsLen = chars.length();

    for (int i = 0; i < charsLen; i++) {
        keypadHelper(num / 10, chars[i] + output, result, count);
    }
}

int keypad(int num, string output[]) {
    int count = 0;
    keypadHelper(num, "", output, count);
    return count;
}












#include <iostream>
#include <string>
#include "solution.h"
using namespace std;

int main(){
    int num;
    cin >> num;

    string output[10000];
    int count = keypad(num, output);
    for(int i = 0; i < count && i < 10000; i++){
        cout << output[i] << endl;
    }
    return 0;
}


