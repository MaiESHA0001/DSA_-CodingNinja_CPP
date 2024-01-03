Problem statement
Print the following pattern for the given number of rows.

Note: N is always odd.


Pattern for N = 5



The dots represent spaces.




Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 49
Sample Input 1:
5
Sample Output 1:
  *
 ***
*****
 ***
  *
Sample Input 2:
3
Sample Output 2:
  *
 ***
  *
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = (n / 2) + 1;
    int count = num - 1;

    for (int i = 1; i <= num; i++) {

/*
#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = (n / 2) + 1;
    int count = num - 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= count; j++) {
            cout << " ";
        }

        count--;

        for (int k = 1; k <= (2 * i) - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    count = 1;

    for (int i = 1; i <= (num - 1); i++) {
        for (int j = 1; j <= count; j++) {
            cout << " ";
        }

        count++;

        for (int k = 1; k <= (2 * (num - i)) - 1; k++) {
            cout << "*";
        }

        cout << endl;
    }

    return 0;
}
*/
