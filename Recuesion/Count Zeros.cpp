Problem statement
Given an integer N, count and return the number of zeros that are present in the given integer using recursion.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^9
Sample Input 1 :
0
Sample Output 1 :
1
Sample Input 2 :
00010204
Sample Output 2 :
2
Explanation for Sample Output 2 :
Even though "00010204" has 5 zeros, the output would still be 2 because when you convert it to an integer, it becomes 10204.
Sample Input 3 :
708000
Sample Output 3 :
4















  
int countZeros(int n) {
    // Write your code here
 if (n == 0) {
        return 1;
    }

    // Base case: If the number is less than 10, return 0 (no zeros)
    if (n < 10) {
        return 0;
    }

    // Recursive case: Count zeros in the remainder of the number
    int smallOutput = countZeros(n / 10);

    // Check the last digit of the number
    if (n % 10 == 0) {
        return smallOutput + 1; // If last digit is zero, add 1 to the count
    } else {
        return smallOutput; // Otherwise, return the count without incrementing
    }
}












#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << countZeros(n) << endl;
}






