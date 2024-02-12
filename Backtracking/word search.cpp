Problem statement
You are given a 2D board('N' rows and 'M' columns) of characters and a string 'word'.



Your task is to return true if the given word exists in the grid, else return false. The word can be constructed from letters of sequentially adjacent cells, where adjacent cells are horizontally or vertically neighboring.



Note:
The same letter cell should not be used more than once.
For Example:
For a given word “design” and the given 2D board 
[[q’, ‘v’, ‘m’, ‘h’],
 [‘d’, ‘e’, ‘s’, ‘i’],
 [‘d’, ‘g’, ‘f’, ‘g’],
 [‘e’, ‘c’, ‘p’, ‘n’]]

The word design can be formed by sequentially adjacent cells as shown by the highlighted color in the 2nd row and last column.
board

Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1:
coding
4 4
c z k l
o d i a
r g n m
m r s d
Sample Output 1:
true
Explanation For Sample Input 1:
For the given word, and grid we can construct from letters of sequentially adjacent cells as shown below:
board

Sample Input 2:
ninjas
4 4
c d k s
o d s i
d g n j
e r i n
Sample Output 2:
false
Constraints:
1 <= N <= 6
1 <= M <= 6
1 <= |word| <=20

Time Limit: 1 sec




















  bool isSafe(int row, int col, int n, int m) {
    return (row >= 0 && row < n && col >= 0 && col < m);
}

bool searchWord(vector<vector<char>>& board, string& word, int row, int col, int index, int n, int m) {
    if (index == word.length()) {
        return true; // Whole word found
    }

    if (!isSafe(row, col, n, m) || board[row][col] != word[index]) {
        return false; // Out of bounds or character mismatch
    }

    char temp = board[row][col]; // Temporarily mark the cell as visited
    board[row][col] = '#';

    // Check in all four directions
    bool found = searchWord(board, word, row + 1, col, index + 1, n, m) ||
                 searchWord(board, word, row - 1, col, index + 1, n, m) ||
                 searchWord(board, word, row, col + 1, index + 1, n, m) ||
                 searchWord(board, word, row, col - 1, index + 1, n, m);

    board[row][col] = temp; // Restore the original value

    return found;
}

bool present(vector<vector<char>>& board, string& word, int n, int m) {
    if (n == 0 || m == 0 || word.empty()) {
        return false; // Edge cases where board is empty or word is empty
    }

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (board[i][j] == word[0] && searchWord(board, word, i, j, 0, n, m)) {
                return true; // Word found starting from position (i, j)
            }
        }
    }

    return false; // Word not found
}




















#include<iostream>
#include<fstream>
#include<vector>
#include<cmath>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

#include "solution.h"

class Runner
{
    string s;
    int n,m;
    vector<vector<char>> mat;

public:
    
    void takeInput()
    {
        cin >> s >> n >> m;
        mat = vector<vector<char>> (n,vector<char> (m));
        for(int i=0;i<n;i++)for(int j=0;j<m;j++)cin >> mat[i][j];
    }
    void execute()
    {
        // make copy if vector
        auto cmat = mat;
        present(cmat,s,n,m);
    }
    void executeAndPrintOutput()
    {
        auto cmat = mat;
        if(present(cmat,s,n,m))cout << "true";
        else cout << "false";
    }
};

int main()
{
        Runner runner;
        runner.takeInput();
        runner.executeAndPrintOutput();   
    return 0;
    
}

