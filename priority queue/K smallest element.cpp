Problem statement
You are given with an integer k and an array of integers that contain numbers in random order. Write a program to find k smallest numbers from given array. You need to save them in an array and return it.

Time complexity should be O(n * logk) and space complexity should not be more than O(k).

Note: Order of elements in the output is not important.

Detailed explanation ( Input/output format, Notes, Images )
Constraints:
Time Limit: 1 sec
Sample Input 1 :
13
2 12 9 16 10 5 3 20 25 11 1 8 6 
4
Sample Output 1 :
1 2 3 5 


















  vector<int> kSmallest(int arr[], int n, int k) {
    // Write your code here
    void printSolution(int **solution, int n)
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cout << solution[i][j] << " ";
    cout << endl;
}
void mazeHelp(int maze[][20], int n, int **solution, int x, int y)
{
    if (x == n - 1 && y == n - 1)
    {
        solution[x][y] = 1;
        printSolution(solution, n);
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
void ratInAMaze(int maze[][20], int n)
{
    int **solution = new int *[n];
    for (int i = 0; i < n; i++)
        solution[i] = new int[n];
    for (int i = 0; i < n; i++)
        memset(solution[i], 0, n * sizeof(int));
    mazeHelp(maze, n, solution, 0, 0);

}















#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

#include "solution.h"

int main() {
    int size;
    cin >> size;

    int *input = new int[size];

    for (int i = 0; i < size; i++) {
        cin >> input[i];
    }

    int k;
    cin >> k;

    vector<int> output = kSmallest(input, size, k);
    sort(output.begin(), output.end());

    for (int i = 0; i < output.size(); i++) {
        cout << output[i] << " ";
    }

    delete[] input;
}

