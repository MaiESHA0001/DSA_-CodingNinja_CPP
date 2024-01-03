/*
Problem statement
Given a 2D integer array with n rows and m columns. Print the 0th row from input n times, 1st row n-1 times…..(n-1)th row will be printed 1 time.

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
3 3
1 2 3
4 5 6
7 8 9
Sample Output 1 :
1 2 3
1 2 3
1 2 3
4 5 6
4 5 6
7 8 9
#include <iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col) {
	// Write your code here
int i,j,k;
    for(i=0;i<row;i++){
        for(k=1;k<=row-i;k++){
            for(j=0;j<col;j++){
                cout << input[i][j] << ' ';

*/



#include <iostream>
using namespace std;

void print2DArray(int input[][1000], int row, int col) {
	// Write your code here
int i,j,k;
    for(i=0;i<row;i++){
        for(k=1;k<=row-i;k++){
            for(j=0;j<col;j++){
                cout << input[i][j] << ' ';
            }
            cout << endl;
        }
    }


}



#include <iostream>
using namespace std;
#include "solution.h"
int main() {
    int row, col;
    cin >> row >> col;

    int input[row][1000];
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>input[i][j];
        }
    }
    print2DArray(input, row, col);
}
