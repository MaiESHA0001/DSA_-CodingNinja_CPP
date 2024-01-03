/*
Problem statement
You have been given two binary strings ‘A’ and ‘B’. Your task is to find the sum of both strings in the form of a binary string.

Binary strings are the representation of integers in the binary form. For example, the binary strings of 9 and 16 are “1001” and “10000” respectively.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= T <= 5
1 <= N, M <= 5000

‘A’ and ‘B’ consist only of '0' or '1' characters.

Each string does not contain leading zeros except for the zero itself.

Time limit: 1 sec
Sample Input 1:
2
2 2
10 01
3 2
111 10
Sample Output 1:
11
1001
Explanation of sample input 1:
In the first test case, the first string is “10” which is 2 in the decimal format, and the second string is “01” which is 1 in the decimal format. So, 2 + 1 = 3, which is represented as “11” in binary form.

In the first test case, the first string is “111” which is 7 in the decimal format, and the second string is “10” which is 2 in the decimal format. So, 7 + 2 = 9, which is represented as “1001” in binary form.
Sample Input 2:
2
3 1
111 0
1 1
1 1
Sample Output 2:
111
10
Explanation for sample input 2:
In the first test case, the first string is “111” which is 7 in the decimal format, and the second string is “0” which is 0 in the decimal format. So, 7 + 0 = 0, which is represented as “111” in binary form.

In the first test case, the first string is “1” which is 1 in the decimal format and the second string is “1” which is 1 in the decimal format. So, 1 + 1 = 2, which is represented as “10” in binary form.
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
     string result = "";  // To store the binary sum
    int carry = 0;       // Initialize carry to 0

    // Traverse the binary strings from right to left
    int i = n - 1, j = m - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

*/
string addBinaryString(string &a, string &b, int n, int m)
{
    // Write your code here.
     string result = "";  // To store the binary sum
    int carry = 0;       // Initialize carry to 0

    // Traverse the binary strings from right to left
    int i = n - 1, j = m - 1;
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        if (i >= 0)
            sum += a[i] - '0';  // Convert char to int

        if (j >= 0)
            sum += b[j] - '0';  // Convert char to int

        carry = sum / 2;  // Update carry
        result = to_string(sum % 2) + result;  // Append remainder to result

        i--;
        j--;
    }

    return result;
}





#include <cstdlib>
#include <string>
#include <fstream>
#include <iostream>
#include <vector>

using namespace std;
#include "solution.h"

class Runner
{
    int t;
    vector<pair<string, string>> binaryString;
    vector<pair<int, int>> stringLength;

public:
    void takeInput()
    {
        cin >> t;

        binaryString.resize(t);
        stringLength.resize(t);

        for (int l = 0; l < t; l++)
        {
            cin >> stringLength[l].first >> stringLength[l].second;

            cin >> binaryString[l].first >> binaryString[l].second;
        }
    }

    void execute()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            addBinaryString(a, b, n, m);
        }
    }

    void executeAndPrintOutput()
    {
        for (int i = 0; i < t; i++)
        {
            string a = binaryString[i].first;
            string b = binaryString[i].second;
            int n = stringLength[i].first;
            int m = stringLength[i].second;

            cout << addBinaryString(a, b, n, m) << endl;
        }
    }
};

int main()
{
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();

    return 0;
}
