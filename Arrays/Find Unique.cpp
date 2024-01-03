/*
Problem statement
You have been given an integer array(ARR) of size N.

Now, in the given array, all numbers are present twice or more than twice except only one number is present only once.

You need to find and return that number which is unique in the array.

 Note:
Unique element is always present in the array according to the given condition.
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^3
Time Limit: 1 sec
Sample Input 1:
7
2 3 1 6 3 6 2
Sample Output 1:
1
Sample Input 2:
9
1 3 1 3 6 6 7 10 7
Sample Output 2:
10



int findUnique(int arr[], int size){
 int j;
    for(int i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(i==j)
                continue;	//skipping when i and j is same
            if(arr[i] == arr[j])

*/
int findUnique(int arr[], int size){
 int j;
    for(int i=0; i<size; i++){
        for(j=0; j<size; j++){
            if(i==j)
                continue;	//skipping when i and j is same
            if(arr[i] == arr[j])
                break;		//leaving j loop when we get a duplicate
        }
        if(j == size){
           return arr[i];	//if j reaches the end of the array then it means there is no duplicate for the i element in the array
        }
    
       }
}

/* main code*/

#include <iostream>
#include "solution.h"
using namespace std;

int main()
{

	
		int size;
		cin >> size;
		int input[size];

		for (int i = 0; i < size; ++i)
		{
			cin >> input[i];
		}

		cout << findUnique(input, size) << endl;
	

	return 0;
}
