/*

Problem statement
You have been given two sorted arrays/lists(ARR1 and ARR2) of size N and M respectively, merge them into a third array/list such that the third array is also sorted.

Note:
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^5
0 <= M <= 10^5
Time Limit: 1 sec 
Note:
Consider the case when size of the two arrays is not same.
Sample Input 1 :
1
5
1 3 4 7 11
4
2 4 6 13
Sample Output 1 :
1 2 3 4 4 6 7 11 13 
Sample Input 2 :
2
3
10 100 500
7
4 7 9 25 30 300 450
4
7 45 89 90
0
Sample Output 2 :
4 7 9 10 25 30 100 300 450 500
7 45 89 90
void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    //Write your code here   
    //You don't have to print or return anything, 
    //just store the final answer in third array ans. 
    {
    //Write your code here 
    int i=0,j=0,k=0;
    // arr1[size1]=INT_MAX;
    // arr2[size2]=INT_MAX;

*/


void merge(int arr1[], int size1, int arr2[], int size2, int ans[])
{
    //Write your code here   
    //You don't have to print or return anything, 
    //just store the final answer in third array ans. 
    {
    //Write your code here 
    int i=0,j=0,k=0;
    // arr1[size1]=INT_MAX;
    // arr2[size2]=INT_MAX;
    while(i<size1&&j<size2){
        
        if(arr1[i]<arr2[j]){
            ans[k]= arr1[i];
            i++;
            k++;
        }
        else{
            ans[k]= arr2[j];
            j++;
            k++;
        }
    }
    if(i==size1){
        while(j<size2){
            ans[k]= arr2[j];
            j++;
            k++;
        }
    }
    if(j==size2){
        while(i<size1){
            ans[k]= arr1[i];
            i++;
            k++;
        }
    }
}
}

/*  main code */

#include <iostream>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;
	
	while (t--)
	{
		int size1;
		cin >> size1;

		int arr1[size1];

		for (int i = 0; i < size1; i++)
		{
			cin >> arr1[i];
		}

		int size2;
		cin >> size2;

		int arr2[size2];

		for (int i = 0; i < size2; i++)
		{
			cin >> arr2[i];
		}

		int ans[size1+size2];

		merge(arr1, size1, arr2, size2, ans);

		for (int i = 0; i < size1 + size2; i++)
		{
			cout << ans[i] << " ";
		}

		cout << endl;

	}
}
