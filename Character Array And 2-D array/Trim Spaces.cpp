/*
Problem statement
Given an input string S that contains multiple words, you need to remove all the spaces present in the input string.

There can be multiple spaces present after any word.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= Length of string S <= 10^6

Sample Input :
abc def g hi
Sample Output :
abcdefghi

  */

void trimSpaces(char input[]) {
    int i = 0, j = 0;
    while (input[i]) {
      if (input[i] != ' ') {
        input[j] = input[i];
        j++;
      }
      i++;
    }
    input[j] = '\0';
    }

/* main code */

#include <iostream>
#include <cstring>
using namespace std;

#include "solution.h"

int main() {
    char input[1000000];
    cin.getline(input, 1000000);
    trimSpaces(input);
    cout << input << endl;
}


