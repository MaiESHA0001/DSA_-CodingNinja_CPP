Problem statement
Given the 'start' and the 'end'' positions of the array 'input'. Your task is to sort the elements between 'start' and 'end' using quick sort.



Note :
Make changes in the input array itself.
Detailed explanation ( Input/output format, Notes, Images )
Sample Input 1 :
6 
2 6 8 5 4 3
Sample Output 1 :
2 3 4 5 6 8
Sample Input 2 :
5
1 2 3 5 7
Sample Output 2 :
1 2 3 5 7 
Constraints :
1 <= N <= 10^3
0 <= input[i] <= 10^9

  































int partitionArray(int input[], int start, int end) {
    int pivot = input[end];
    int i = start - 1;

    for (int j = start; j < end; j++) {
        if (input[j] <= pivot) {
            i++;
            swap(input[i], input[j]);
        }
    }

    swap(input[i + 1], input[end]);
    return i + 1;
}

void quickSort(int input[], int start, int end) {
    if (start < end) {
        int pivotIndex = partitionArray(input, start, end);

        quickSort(input, start, pivotIndex - 1);
        quickSort(input, pivotIndex + 1, end);
    }
}


















#include <algorithm>
#include <climits>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <iostream>
#include <string>
#include <utility>
#include <vector>
using namespace std;
#include "solution.h"

class Runner {
    vector<int> v;

public:
    void takeInput() {
        int n;
        cin >> n;
        v.resize(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
    }

    void execute() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        free(input);
    }

    void executeAndPrintOutput() {
        int n = (int)v.size();

        int* input = new int[n];
        for (int i = 0; i < n; i++)
            input[i] = v[i];

        quickSort(input, 0, n - 1);

        for (int i = 0; i < n; i++)
            cout << input[i] << ' ';
        cout << '\n';

        free(input);
    }
};

int main() {
    // freopen("./Testcases/large/in/input.txt", "r", stdin);
    // freopen("./Testcases/large/out/output.txt", "w", stdout);
    Runner runner;
    runner.takeInput();
    runner.executeAndPrintOutput();
    return 0;
}






