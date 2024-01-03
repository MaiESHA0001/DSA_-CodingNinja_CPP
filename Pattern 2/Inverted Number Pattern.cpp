Problem statement
Print the following pattern for the given N number of rows.

Pattern for N = 4
4444
333
22
1
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 50
Sample Input 1:
5
Sample Output 1:
55555 
4444
333
22
1
Sample Input 2:
6
Sample Output 2:
666666
55555 
4444
333
22
1
# include<iostream>
using namespace std;
 
// Driver code
int main()
{
  int n ;
  cin>>n;
   
  // ith row has n-i+1 elements

/*
# include<iostream>
using namespace std;
 
// Driver code
int main()
{
  int n ;
  cin>>n;
   
  // ith row has n-i+1 elements
  for(int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n - i+ 1; j++) {
      cout << n-i+1;
    }
    cout << endl;
  }
  return 0;
}
*/
