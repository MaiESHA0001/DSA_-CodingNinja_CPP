Problem statement
A child is running up a staircase with n steps and can hop either 1 step, 2 steps or 3 steps at a time. Implement a method to count how many possible ways the child can run up to the stairs. You need to return all possible number of ways.

Time complexity of your code should be O(n).

Since the answer can be pretty large soo print the answer with mod(10^9 +7)

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= T < = 10
1 <= N <= 10^5
Sample input 1
2
2
3
Sample output 1
2
4
Explanation of sample input 1:
Test case 1:
To reach at top of 2nd stair, we have only two options i.e (2), (1,1)

Test case 2:
 To reach at top of 3rd stair, we have four options i.e (1,1,1), (1,2) ,(2,1), (3)
Sample input 2:
2
5
10
Sample output 2:
13
274
#include<bits/stdc++.h>
using namespace std;

const long MOD = 1e9 + 7;

long countWays(long n) {
    long dp[n + 1];
    dp[0] = dp[1] = 1;
    dp[2] = 2;




















#include<bits/stdc++.h>
using namespace std;

const long MOD = 1e9 + 7;

long countWays(long n) {
    long dp[n + 1];
    dp[0] = dp[1] = 1;
    dp[2] = 2;

    for (int i = 3; i <= n; ++i) {
        dp[i] = (dp[i - 1] + dp[i - 2] + dp[i - 3]) % MOD;
    }

    return dp[n];
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n;
        cin >> n;
        long ways = countWays(n);
        cout << ways << endl;
    }

    return 0;
}


















