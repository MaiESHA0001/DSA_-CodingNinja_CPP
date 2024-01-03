/*
Problem statement
You are given an integer array 'arr' of size 'N'.



You must sort this array using 'Insertion Sort' recursively.



 Note:
Change in the input array itself. You don't need to return or print the elements.
Example:
Input: ‘N’ = 7
'arr' = [2, 13, 4, 1, 3, 6, 28]

Output: [1 2 3 4 6 13 28]

Explanation: After applying insertion sort on the input array, the output is [1 2 3 4 6 13 28].
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
5
9 3 6 2 0
Sample Output 1:
0 2 3 6 9
Sample Input 2:
4
4 3 2 1
Sample Output 2:
1 2 3 4 
Constraints :
0 <= N <= 10^3
0 <= arr[i] <= 10^5
Time Limit: 1 sec
void insertionSort(int arr[], int n)
{
    //write your code here
    {
    //Write your code here
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

*/

void insertionSort(int arr[], int n)
{
    //write your code here
    {
    //Write your code here
    int i, key, j;
    for (i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;
 
       
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}
}

/*  main code  */

#include<iostream>
#include "solution.h"
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
