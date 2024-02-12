Problem statement
You are given a 'N' * 'N' maze with a rat placed at 'MAZE[0][0]'. Find and print all paths that rat can follow to reach its destination i.e. 'MAZE['N' - 1]['N' - 1]'. Rat can move in any direc­tion ( left, right, up and down).

Value of every cell in the 'MAZE' can either be 0 or 1. Cells with value 0 are blocked means the rat can­not enter into those cells and those with value 1 are open.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
1 <= N <= 10
0 <= MAZE[i][j] <=1

Where 'MAZE[i][j]' denotes the value in the cell of 'MAZE'.

Time Limit: 1 sec
Sample Input 1 :
3
1 0 1
1 0 1
1 1 1
Sample Output 1 :
1 0 0 1 0 0 1 1 1 
Explanation for Sample Output 1:
Only 1 path is possible which contains coordinate < (1,1), (2,1), (3,1), (3,2) and (3,3) >

So our path matrix will look like this:

1 0 0
1 0 0
1 1 1

Which is returned from left to right and then top to bottom in one line.
Sample Input 2 :
2
1 0
0 1
Sample Output 2 :
 [Blank]
Explanation for Sample Output 2:
As no path is possible to the last cell, a blank vector will be returned and nothing is printed.



















  // solution.cpp
#include <vector>
#include <cstring>
vector<vector<int>> ans;
void mazeHelp(vector<vector<int>> &maze, int n, int **solution, int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(solution[i][j]);
            }
        }
        ans.push_back(temp);
        solution[x][y] = 0;
        return;
    }
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
        return;
    solution[x][y] = 1;
    mazeHelp(maze, n, solution, x - 1, y);
    mazeHelp(maze, n, solution, x + 1, y);
    mazeHelp(maze, n, solution, x, y - 1);
    mazeHelp(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
        solution[i] = new int[n];
    for (int i = 0; i < n; i++)
        memset(solution[i], 0, n * sizeof(int));
    mazeHelp(maze, n, solution, 0, 0);

    return ans;
}





















// solution.cpp
#include <vector>
#include <cstring>
vector<vector<int>> ans;
void mazeHelp(vector<vector<int>> &maze, int n, int **solution, int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        vector<int> temp;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                temp.push_back(solution[i][j]);
            }
        }
        ans.push_back(temp);
        solution[x][y] = 0;
        return;
    }
    if (x >= n || x < 0 || y >= n || y < 0 || maze[x][y] == 0 || solution[x][y] == 1)
        return;
    solution[x][y] = 1;
    mazeHelp(maze, n, solution, x - 1, y);
    mazeHelp(maze, n, solution, x + 1, y);
    mazeHelp(maze, n, solution, x, y - 1);
    mazeHelp(maze, n, solution, x, y + 1);
    solution[x][y] = 0;
}

vector<vector<int>> ratInAMaze(vector<vector<int>> &maze, int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
        solution[i] = new int[n];
    for (int i = 0; i < n; i++)
        memset(solution[i], 0, n * sizeof(int));
    mazeHelp(maze, n, solution, 0, 0);

    return ans;
}


























