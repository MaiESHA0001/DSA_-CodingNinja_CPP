Problem statement
Given an array A and an integer K, print all subsets of A which sum to K.

Subsets are of length varying from 0 to n, that contain elements of the array. But the order of elements should remain same as in the input array.


Note :
The order of subsets are not important. Just print them in different lines.


Detailed explanation ( Input/output format, Notes, Images )
Sample Input:
9 
5 12 3 17 1 18 15 3 17 
6
Sample Output:
3 3
5 1
#include <iostream>
#include <vector>
using namespace std;

void subsetSumHelper(vector<int>& input, int k, vector<int>& subset, int index, int currentSum) {
    if (currentSum == k) {
        // Print the subset with sum equal to K
        for (int num : subset) {
            cout << num << " ";
        }























#include <iostream>
#include <vector>
using namespace std;

void subsetSumHelper(vector<int>& input, int k, vector<int>& subset, int index, int currentSum) {
    if (currentSum == k) {
        // Print the subset with sum equal to K
        for (int num : subset) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Generate subsets by including elements one by one
    for (int i = index; i < input.size(); ++i) {
        // Include the current element in the subset
        subset.push_back(input[i]);

        // Recursively check subsets including the current element
        subsetSumHelper(input, k, subset, i + 1, currentSum + input[i]);

        // Exclude the current element from the subset (backtrack)
        subset.pop_back();
    }
}

void printSubsetSumToK(int input[], int size, int k) {
    vector<int> array(input, input + size);
    vector<int> subset;
    subsetSumHelper(array, k, subset, 0, 0);
}






















#include <iostream>
using namespace std;
#include "solution.h"

int main() {
  int input[1000],length,k;
  cin >> length;
  for(int i=0; i < length; i++)
    cin >> input[i];
  cin>>k;
  printSubsetSumToK(input, length,k);
}
