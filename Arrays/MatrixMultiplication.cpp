#include<bits/stdc++.h>

/**
 * @brief Matrices can either be rectangular or square
 * 
 * The function multiplyMatrix will be used to multiply these matrices
 */

// macros for matrix dimensions
#define R1 4 // number of rows in matrix 1
#define C1 4 // number of columns in matrix 1
#define R2 4 // number of rows in matrix 2
#define C2 4 // number of columns in matrix 2

void multiplyMatrix(int matrix1[][C1], int matrix2[][C2]) {
    int result[R1][C1]; // result in matrix form

    std::cout << "Multiplication of two given matrices is: " << std::endl;

    for(int i = 0; i < R1; i++)
        for(int j = 0; j < C2; j++) {
            result[i][j] = 0;

            for(int k = 0; k < R2; k++) {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }

            std::cout << result[i][j] << "\t";
        }

        std::cout << std::endl;
}

int main() {
    // square matrices
    int matrix1[R1][C1] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    int matrix2[R2][C2] = {
        {1, 1, 1, 1},
        {2, 2, 2, 2},
        {3, 3, 3, 3},
        {4, 4, 4, 4}
    };

    if(C1 != R2) {
        std::cout << "The number of columns in matrix1 must be equal to the number of rows in "
            << "matrix2" << std::endl;
        std::cout << "Please update MACROS according to array dimensions" << std::endl;

        exit(EXIT_FAILURE);
    }

    multiplyMatrix(matrix1, matrix2);

    return 0;
}