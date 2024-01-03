/*
Problem statement
You have a list of numbers that are not in order. You want to find out how many pairs of numbers are in the wrong order. A pair of numbers is in the wrong order if the smaller number comes after the larger number in the list. For example, in the list [3, 2, 11, 5, 1], the pairs (3, 2), (3, 1), (2, 1), (11, 5), (11, 1), and (5, 1) are in the wrong order.

Example:
Input: ‘N’ = 5 
‘A’ = [3, 2, 11, 5, 1]

Output: 6
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= N <= 10^4
1 <= nums[i] <= 10^9
Time Limit: 1 sec
Sample Input 1:
5
3 2 11 5 1
Sample Output 1:
6
Explanation
When we apply selection sort, first swap will happen between array[0] to array[4], inversion will be (index of arrar[4]-index of array[0]) = 4-0=4 and the array after this will be [1, 2, 11, 5, 3], still the array is not sorted. So we will apply selection sort again, the swap will now take place between array[2] and array[4], inversion will be 4+(index of arrar[4]-index of array[2])=4+(4-2)=4+2=6.So the final sorted array now will be [1,2,3,5,11]
Sample Input 2:
7
17 5 14 16 11 18 10
Sample Output 2:
10
Explanation
List: [17, 5, 14, 16, 11, 18, 10] The pairs of numbers that are in the wrong order are:
(17, 5), (17, 14), (17, 16), (17, 11), (17, 10), (14, 11), (16, 11), (16, 10), (18, 10), and (11, 10).

There are 10 such pairs, so the output is 10.

int getInversions(int arr[], int n)
{
    //Write your code here
}
*/

int getInversions(int arr[], int n)
{
    //Write your code here
  int  inversion=0;
    for(int i=0;i<n-1;i++)
    {
        int min=arr[i],minIndex=i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j ]<min){
                min=arr[j];
                minIndex=j;
            }
        }

        int temp=arr[i];
        arr[i]=arr[minIndex];
        arr[minIndex]=temp;
inversion=inversion+minIndex-i;

    }
    return inversion;
}

                     /* Main code */


#include<iostream>
using namespace std;

#include"solution.h"
int main() {
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
	    cin>>arr[i];
    }
    int ans = getInversions(arr, n);
    cout << ans << endl;
    return 0;
}
