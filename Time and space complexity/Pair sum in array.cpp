Problem statement
You have been given an integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

Note:
Given array/list can contain duplicate elements. 
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
1 <= t <= 10^2
0 <= N <= 10^4
0 <= num <= 10^9

Time Limit: 1 sec
Sample Input 1:
1
9
1 3 6 2 5 4 3 2 4
7
Sample Output 1:
7
Sample Input 2:
2
9
1 3 6 2 5 4 3 2 4
12
6
2 8 10 5 -2 5
10
Sample Output 2:
0
2


 Explanation for Input 2:
Since there doesn't exist any pair with sum equal to 12 for the first query, we print 0.

For the second query, we have 2 pairs in total that sum up to 10. They are, (2, 8) and (5, 5).






















  int pairSum(int *arr, int n, int num)
{
	//Write your code here
	#include <cmath>

int pairSum(int *arr, int n, int num) {
	//Write your code here
    
    int count = 0;
    
    sort(arr,arr + n);
    
    int start = 0;
    int end = n - 1;
    
    for(; start < end;) {
         if(arr[start] + arr[end] < num) {
            start++;
        }
        else if (arr[start] + arr[end] > num) {
            end--;
        }
        else {
            int start_element = arr[start];
            int end_element =  arr[end];
            
            //if all the elements are same
            if (start_element == end_element) {
              int total = (end - start) + 1;
              count += ((total) * (total - 1)) / 2; // n choose 2;
              return count;
            }
        }
    }























#include <iostream>
#include <algorithm>
using namespace std;

#include "solution.h"

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int size;
		int x;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		cin >> x;

		cout << pairSum(input, size, x) << endl;

		delete[] input;
	}
	
	return 0;
}


  
    

