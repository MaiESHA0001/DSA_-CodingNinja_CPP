/*
Problem statement
Given a binary number as an integer N, convert it into decimal and print.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^9
Sample Input 1 :
1100
Sample Output 1 :
12
Sample Input 2 :
111
Sample Output 2 :
7
#include <iostream>
using namespace std;
int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += lastDigit * base;

*/
#include <iostream>
using namespace std;
int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += lastDigit * base;
        base *= 2;
    }

    return decimalNumber;
}

int main() {
    int N;
    cout << "";
    cin >> N;

    int decimalValue = binaryToDecimal(N);
    std::cout << "" << decimalValue << std::endl;

    return 0;
}
