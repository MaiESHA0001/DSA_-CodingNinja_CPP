/*
Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
*
**
***
****
Note : There are no spaces between the stars (*).
Detailed explanation ( Input/output format, Notes, Images )
Constraints
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
*
**
***
****
*****
Sample Input 2:
6
Sample Output 2:
*
**
***
****
*****
******
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";

*/
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i = 1; i <= n; ++i) {
        for(int j = 1; j <= i; ++j) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

