/*
Given an array ar of n integers, reverse the elements of the array by using the concept of pointers.

Input Format:
Enter a number N and take N more inputs in array ar.
Output Format:
Display values of the reversed array (separated by space)

Constraints
1<= n <=10^6
-10^6<= ar[i] <= 10^6
Note
 You only have to complete the definition of the given function named "reverse". Input has already been taken for you.

Sample Input :
4
1
2
3
4
Sample Output :
4 3 2 1 
*/

#include <iostream>
using namespace std;

void reverse(int *ar,int n)
{
	int i=0;
	int j=n-1;
	while(i<j)
	{
		int temp=ar[i];
		ar[i]=ar[j];
		ar[j]=temp;
		i++;
		j--;
	}
	
}
int main()
{
    int n;
    cin>>n;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    reverse(ar,n);
    for(int i=0;i<n;i++)
    {
        cout<<ar[i]<<" ";
    }
    return 0;
}
