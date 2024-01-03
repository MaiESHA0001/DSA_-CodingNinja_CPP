/*
Problem statement
Given an integer N, print all the prime numbers that lie in the range 2 to N (both inclusive).

Print the prime numbers in different lines.

Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 100
Sample Input 1:
9
Sample Output 1:
2
3
5
7
Sample Input 2:
20
Sample Output 2:
2
3
5
7
11
13
17
19
#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    std::cin >> n;

*/

#include <iostream>
using namespace std;

int main(){

    /* Read input as specified in the question.
	 * Print output as specified in the question.
	 */
    int n;
    std::cin >> n;
    for (int i = 2; i <= n; i++) {
        int count = 0;
        for (int j = 2; j <= i; j++) {
            if (i % j == 0)
                count++;
        }
        if (count == 1)
            std::cout << i << std::endl;
    }
    return 0;

}
