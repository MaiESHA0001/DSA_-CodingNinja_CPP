/*
Problem statement
Print the following pattern

Pattern for N = 4




Hint
As taught in the video, you just have to modify the code so that instead of printing numbers, it should output stars ('*').
The dots represent spaces.




Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 50
Sample Input 1 :
3
Sample Output 1 :
   *
  *** 
 *****
Sample Input 2 :
4
Sample Output 2 :
    *
   *** 
  *****
 *******
#include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cin>>n;
for(i = 1; i <= n; i++)
{

for(s = i; s < n; s++)

*/
  #include<iostream>
using namespace std;
int main()
{
int n, s, i, j;
cin>>n;
for(i = 1; i <= n; i++)
{

for(s = i; s < n; s++)
{
cout<<" ";
}

for(j = 1; j <= 2 * i - 1; j++)
{
cout<<"*";
}

cout<<endl;
}
}

