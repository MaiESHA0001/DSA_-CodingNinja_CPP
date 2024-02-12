Problem statement
You have been given a sorted integer array/list(ARR) and a number 'num'. Find and return the total number of pairs in the array/list which sum to 'num'.

Note:
Given array/list can not contain duplicate elements. 
Detailed explanation ( Input/output format, Notes, Images )
Constraints :
0 <= N <= 10^5
0 <= num <= 10^5
Time Limit: 1 sec
Sample Input 1:
5
1 2 3 4 5
7
Sample Output 1:
2
Sample Input 2:
5
1 2 3 4 5
10
Sample Output 2:
0



















  int pairSum(int A[], int size, int K)
{
     // Write your code here.
      int left = 0, right = size - 1;
    int count = 0;

    while (left < right) {
        int currentSum = A[left] + A[right];
        if (currentSum == K) {
            count++;
            left++;
            right--;
        } else if (currentSum < K) {
            left++;
        } else {
            right--;
        }
    }

    return count;


}






















#include <iostream>
using namespace std;
#include"solution.h"
int main()
{
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++)
    {
        cin>>input[i];
    }
    int k;
    cin>>k;
    int ans = pairSum(input, n, k);
    cout<<ans;
    return 0;
}

