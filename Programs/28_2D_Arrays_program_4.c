// WAP to add two matrices
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix_1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix_2[3][3] = {
        {9, 8, 7},
        {6, 5, 4},
        {3, 2, 1}
    };
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", matrix_1[i][j] + matrix_2[i][j]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}