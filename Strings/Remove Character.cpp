/*
Problem statement
For a given string(str) and a character X, complete the definition of the functions that removes all the characters in string(str) that matches the character X.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
0 <= N <= 10^6
Where N is the length of the input string.

Time Limit: 1 second
Sample Input 1:
aabccbaa
a
Sample Output 1:
bccb
Sample Input 2:
xxyyzxx
y
Sample Output 2:
xxzxx
void removeAllOccurrencesOfChar(string input, char c) 

{
 
input.erase(remove(
                input.begin(), input.end(), c),
            input.end());
 
    cout<< input;
}

*/
void removeAllOccurrencesOfChar(string input, char c) 

{
 
input.erase(remove(
                input.begin(), input.end(), c),
            input.end());
 
    cout<< input;
}

/* int main */

#include<bits/stdc++.h>
using namespace std;

#include "solution.h"

int main(){
    string a;
    cin>>a;
    char c;
    cin>>c;
    removeAllOccurrencesOfChar(a,c);
}
