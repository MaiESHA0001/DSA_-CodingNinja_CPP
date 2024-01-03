/*
Problem statement
Write a program to print first x terms of the series 3N + 2 which are not multiples of 4.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= x <= 1,000
Sample Input 1 :
10
Sample Output 1 :
5 11 14 17 23 26 29 35 38 41
Sample Input 2 :
4
Sample Output 2 :
5 11 14 17
#include <iostream>
using namespace std;
int main() {
    int x;
cin >> x;
    int count = 0;
    int n = 1;
    cout<< "";

    while (count < x) {

*/
#include <iostream>
using namespace std;
int main() {
    int x;
cin >> x;
    int count = 0;
    int n = 1;
    cout<< "";

    while (count < x) {
        int term = 3 * n + 2;
        if (term % 4 != 0) {
        cout << term << " ";
            count++;
        }
        n++;
    }
}
