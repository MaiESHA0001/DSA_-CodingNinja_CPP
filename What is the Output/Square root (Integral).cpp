/*
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
