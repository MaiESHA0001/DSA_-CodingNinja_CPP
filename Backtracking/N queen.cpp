Problem statement
You are given an integer 'N'. For a given 'N' x 'N' chessboard, find a way to place 'N' queens such that no queen can attack any other queen on the chessboard.

A queen can be killed when it lies in the same row, or same column, or the same diagonal of any of the other queens. You have to print all such configurations.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= 'N' <= 10

Time Limit: 1sec


For Example:
For a chessboard of size 4*4
The configurations are 
alt text

Sample Input 1:
4
Sample Output 1:
0 0 1 0 1 0 0 0 0 0 0 1 0 1 0 0
0 1 0 0 0 0 0 1 1 0 0 0 0 0 1 0 
Explanation For Sample Input 1:
Output depicts two possible configurations of the chessboard for 4 queens.

The Chessboard matrix for the first configuration looks as follows:-

0 0 1 0
1 0 0 0
0 0 0 1
0 1 0 0

Queen contained cell is depicted by 1. As seen, No queen is in the same row, column, or diagonal as the other queens. Hence this is a valid configuration.
Sample Input 2:
3
Sample Output2:
      (Blank)
Explanation For Sample Input 2:
Since no possible configuration exists for 3 Queen's.The output remains Empty.














  #include <bits/stdc++.h>
using namespace std;

int board[11][11];

bool isPossible(int n, int row, int col)
{
    for (int i = row - 1; i >= 0; i--)
        if (board[i][col] == 1)
            return false;
    for (int i = row - 1, j = col - 1; i >= 0 && j >= 0; i--, j--)
        if (board[i][j] == 1)
            return false;
    for (int i = row - 1, j = col + 1; i >= 0 && j < n; i--, j++)
        if (board[i][j] == 1)
            return false;
    return true;
}

void nQueenHelper(int n, int row)
{
    if (row == n)
    {
        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                cout << board[i][j] << " ";
        cout << endl;
    }
    else
    {
        for (int j = 0; j < n; j++)
        {
            if (isPossible(n, row, j))
            {
                board[row][j] = 1;
                nQueenHelper(n, row + 1);
                board[row][j] = 0;
            }
        }
    }
}

vector<vector<int>> solveNQueens(int n)
{
    vector<vector<int>>ans;
    memset(board, 0, 11 * 11 * sizeof(int));
    nQueenHelper(n, 0);
    return ans;
}


















#include <iostream>
#include <vector>
using namespace std;
#include "solution.h"

int main() {
    int n;
    cin >> n;
    vector<vector<int>> answer;
    answer = solveNQueens(n);

    for (auto sol : answer) {
        for (auto i : sol) {
            cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}

