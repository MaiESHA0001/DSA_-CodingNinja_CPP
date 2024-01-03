/*
Problem statement
Print the following pattern for the given number of rows.

Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
Detailed explanation ( Input/output format, Notes, Images )
Constraints
0 <= N <= 26
Sample Input 1:
8
Sample Output 1:
H
GH
FGH
EFGH
DEFGH
CDEFGH
BCDEFGH
ABCDEFGH
Sample Input 2:
7
Sample Output 2:
G
FG
EFG
DEFG
CDEFG
BCDEFG
ABCDEFG
#include <iostream>
using namespace std;
int main() {

	int i, j,n;
	cin>>n;
	for (i=n;i>=1;i--) {
		for (j=i;j<=n;j++) {
			char ch='A' + j-1;
			cout<<ch;

*/
#include <iostream>
using namespace std;
int main() {

	int i, j,n;
	cin>>n;
	for (i=n;i>=1;i--) {
		for (j=i;j<=n;j++) {
			char ch='A' + j-1;
			cout<<ch;

		}
		cout<<endl;
	}
	return 0;
}

