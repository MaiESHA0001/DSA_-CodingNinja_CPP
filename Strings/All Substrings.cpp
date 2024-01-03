/*
Problem statement
For a given input string(str), write a function to print all the possible substrings.

Substring
A substring is a contiguous sequence of characters within a string. 
Example: "cod" is a substring of "coding". Whereas "cdng" is not as the characters taken are not contiguous
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^3
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
abc
Sample Output 1:
a 
ab 
abc 
b 
bc 
c 
 Sample Input 2:
co
Sample Output 2:
c 
co 
o
#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
     int length = input.length();
    
    for (int len = 1; len <= length; ++len) {
…    printSubstrings(input);
    return 0;
}
*/
#include <bits/stdc++.h> 
#include <iostream>
#include <cstring>
using namespace std;

void printSubstrings(string input) {
    //Write your code here
     int length = input.length();
    
    for (int len = 1; len <= length; ++len) {
        for (int start = 0; start <= length - len; ++start) {
            std::cout << input.substr(start, len) << std::endl;
        }
    }

}

int main() {
    string input;
    getline(cin, input);
    printSubstrings(input);
    return 0;
}
