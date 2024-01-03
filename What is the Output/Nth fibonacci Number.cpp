/*

Problem statement
Write a program to find the Nth Fibonacci number using loops.



Note :
The Fibonacci series is a sequence of numbers in which each number is the sum of the two preceding ones, usually starting with first_number  and Second_number . 
First_number and Second_number in this question will be 1 . Soo that the resultant series will be 1, 1, 2, 3, 5, 8 ...
Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10000     
Where ‘N’ represents the number for which we have to find its equivalent Fibonacci number.

Time Limit: 1 second
Sample Input 1:
6
Sample Output 1:
8
Explanation
The Fibonacci sequence starts with two numbers first number is 1 and second number is also 1. The subsequent numbers are found by adding the two preceding numbers. Therefore, the first six Fibonacci numbers are: 1, 1, 2, 3, 5, 8 . Hence, the 6th Fibonacci number is 8.
#include<iostream>
using namespace std;
 
int F(int N)
{
    int a = 0, b = 1, c, i;
    if( N == 0)
        return a;
    for(i = 2; i <= N; i++)
    {

*/

#include<iostream>
using namespace std;
 
int F(int N)
{
    int a = 0, b = 1, c, i;
    if( N == 0)
        return a;
    for(i = 2; i <= N; i++)
    {
       c = a + b;
       a = b;
       b = c;
    }
    return b;
}
int main()
{
    int N ;
    cin>>N;
     
    cout << F(N);
    return 0;
}
