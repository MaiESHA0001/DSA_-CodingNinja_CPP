/*
Problem statement
You are given a string 'STR' consisting of lower and upper case characters. You need to remove the consecutive duplicates characters, and return the new string.

Example :
For a given string, "aaaAAbbcccbd"

The new string formed after removing the consecutive duplicates characters will be, "aAbcbd".
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= |S| <= 10^5

Where |S| represents the length of the string.

Time limit: 1 sec
Sample Input 1 :
aabccba
Sample Output 1 :
abcba
Explanation of Sample Output 1 :
The string basically is a concatenation of [aa][b][cc][b][a] without considering the brackets. From each segment we need to choose only 1 character as all the characters are duplicates, therefore the final answer is [a][b][c][b][a] = abcba
Sample Input 2 :
xxxyyyzwwzzz
Sample Output 2 :
xyzwz
Explanation of Sample Output 2 :
The string basically is a concatenation of [xxx][yyy][z][ww][zzz]. After choosing 1 character from each segment our final answer is [x][y][z][w][z] = xyzwz
string removeConsecutiveDuplicates(string str) 
{
    //Write your code here
    string result;
    int len = str.length();
    if (len <= 1) {
        return str;
    }
    result += str[0]; // Append the first character


*/

string removeConsecutiveDuplicates(string str) 
{
    //Write your code here
    string result;
    int len = str.length();
    if (len <= 1) {
        return str;
    }
    result += str[0]; // Append the first character

    for (int i = 1; i < len; ++i) {
        if (str[i] != str[i - 1]) {
            result += str[i]; // Append non-duplicate characters
        }
    }
    return result;
}




#include <iostream>
#include <string>
using namespace std;

#include "solution.h"

int main() {
    
    string s;
    cin >> s;
    s = removeConsecutiveDuplicates(s);
    cout << s;
}
