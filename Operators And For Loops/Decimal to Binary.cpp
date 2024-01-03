/*
Problem statement
Given a decimal number (integer N), convert it into binary and print.

Note: The given input number could be large, so the corresponding binary number can exceed the integer range. So you may want to take the answer as long for CPP and Java.
Note for C++ coders: Do not use the inbuilt implementation of "pow" function. The implementation of that function is done for 'double's and it may fail when used for 'int's, 'long's, or 'long long's. Implement your own "pow" function to work for non-float data types.


Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^5
Sample Input 1 :
12
Sample Output 1 :
1100
Sample Input 2 :
7
Sample Output 2 :
111
#include <iostream>
using namespace std;
long long customPow(int b, int ex) {
    long long r = 1;
    while (ex > 0) {
        if (ex & 1) {
            r*= b;
        }
        b *= b;
        ex >>= 1;

*/
#include <iostream>
using namespace std;
long long customPow(int b, int ex) {
    long long r = 1;
    while (ex > 0) {
        if (ex & 1) {
            r*= b;
        }
        b *= b;
        ex >>= 1;
    }
    return r;
}

string decimalToBinary(int N) {
    if (N == 0) {
        return "0";
    }

    string binary;
    while (N > 0) {
        int rem = N % 2;
        binary = to_string(rem) + binary;
        N /= 2;
    }

    return binary;
}

int main() {
    int N;
    cout << "";
    cin >> N;

    string binary = decimalToBinary(N);
    cout << "" << binary << endl;

    return 0;
}
