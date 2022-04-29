#include<bits/stdc++.h>
using namespace std;

int main() {
    // Demonstration of a 2D array
    // array[n][m]

    int x[3][2] = { // a 2d array of 3 rows and 2 columns
        {0, 1},
        {2, 3},
        {4, 5}
    };

    // outputting array elements
    for(int i = 0; i < 3; i++)   // looping through elements in the row section
        for(int j = 0; j < 2; j++)  { // looping through elements in the column section
            cout << "Element at x[" << i
                << "][" << j << "]: ";
            cout << x[i][j] << endl;
        }
}