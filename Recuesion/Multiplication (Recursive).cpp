Problem statement
Given two integers M & N, calculate and return their multiplication using recursion. You can only use subtraction and addition for your calculation. No other operators are allowed.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= M <= 1000
0 <= N <= 1000
Sample Input 1 :
3 
5
Sample Output 1 :
15
Sample Input 2 :
4 
0
Sample Output 2 :
0















  int multiplyNumbers(int m, int n) {
    // Write your code here
 if (m == 0 || n == 0) {
        return 0;
    }
    
    // Recursive case
    // If n is negative, swap m and n to ensure positive multiplication
    if (n < 0) {
        return -multiplyNumbers(m, -n);
    }
    
    // Add m to the result of multiplying (m, n-1)
    return m + multiplyNumbers(m, n-1);
}


















#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    cout << multiplyNumbers(m, n) << endl;
}


