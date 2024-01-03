/*
Problem statement
Write a program to count and print the total number of characters (lowercase english alphabets only), digits (0 to 9) and white spaces (single space, tab i.e. '\t' and newline i.e. '\n') entered till '$'.

That is, input will be a stream of characters and you need to consider all the characters which are entered till '$'.

Print count of characters, count of digits and count of white spaces respectively (separated by space).

Detailed explanation ( Input/output format, Notes, Images )
Sample Input :
abc def4 5$
Sample Output :
6 2 2
Sample Output Explanation :
Number of characters : 6 (a, b, c, d, e, f)
Number of digits : 2 (4, 5)
Number of white spaces : 2 (one space after abc and one newline after 4)
#include <iostream>
using namespace std;
int main() {
    char ch;
    int charCount = 0, digitCount = 0, spaceCount = 0;
    while (cin >> noskipws >> ch && ch != '$') {
        if (islower(ch)) {
            charCount++;
        } else if (isdigit(ch)) {
            digitCount++;

*/

#include <iostream>
using namespace std;
int main() {
    char ch;
    int charCount = 0, digitCount = 0, spaceCount = 0;
    while (cin >> noskipws >> ch && ch != '$') {
        if (islower(ch)) {
            charCount++;
        } else if (isdigit(ch)) {
            digitCount++;
        } else if (ch == ' ' || ch == '\t' || ch == '\n') {
            spaceCount++;
        }
    }

    cout  << charCount;
    cout << " " << digitCount ;
    cout << " " << spaceCount;

    return 0;
}
