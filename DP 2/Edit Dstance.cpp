Problem statement
Given two strings s and t of lengths m and n respectively, find the edit distance between the strings.

Edit Distance
Edit Distance of two strings is minimum number of operations required to make one string equal to other. In order to do so you can perform any of the following three operations only :
1. Delete a character
2. Replace a character with another one
3. Insert a character
Note
Strings don't contain spaces
You need to find the edit distance from input string1 to input string2.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1<= m,n <= 10
Time Limit: 1 second
Sample Input 1 :
abc
dc
Sample Output 1 :
2
int editDistance(string s1, string s2, int **output)
{
    int m = s1.size(), n = s2.size();
    if (m == 0 || n == 0)
        return max(m, n);

    if (output[m][n] != -1)
        return output[m][n];

    int ans;





















int editDistance(string s1, string s2, int **output)
{
    int m = s1.size(), n = s2.size();
    if (m == 0 || n == 0)
        return max(m, n);

    if (output[m][n] != -1)
        return output[m][n];

    int ans;
    if (s1[0] == s2[0])
        ans = editDistance(s1.substr(1), s2.substr(1), output);
    else
    {
        int x = editDistance(s1.substr(1), s2, output) + 1;
        int y = editDistance(s1, s2.substr(1), output) + 1;
        int z = editDistance(s1.substr(1), s2.substr(1), output) + 1;
        ans = min(x, min(y, z));
    }

    output[m][n] = ans;

    return output[m][n];
}
int editDistance(string s1, string s2)
{
    // Write your code here
    int m = s1.size(), n = s2.size();
    int **output = new int *[m + 1];
    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
        for (int j = 0; j <= n; j++)
            output[i][j] = -1;
    }
    return editDistance(s1, s2, output);
}















#include <cstring>
#include <iostream>
using namespace std;

#include "solution.h"

int main() {
    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    cout << editDistance(s1, s2);
}
