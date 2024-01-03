/*
Problem statement
Given a number N, find its square root. You need to find and print only the integral part of square root of N.

For eg. if number given is 18, answer is 4.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^8
Sample Input 1 :
10
Sample Output 1 :
3
Sample Input 2 :
4
Sample Output 2 :
2
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculate the square root and convert it to an integer
    int squareRoot = static_cast<int>(sqrt(N));

    cout << squareRoot <<endl;
    return 0;
}
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int N;
    cin >> N;

    // Calculate the square root and convert it to an integer
    int squareRoot = static_cast<int>(sqrt(N));

    cout << squareRoot <<endl;
    return 0;
}
