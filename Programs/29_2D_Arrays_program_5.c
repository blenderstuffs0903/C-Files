// WAP to multiply two matrices.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix_1[2][2] = {
        {6, 9},
        {2, 3}
    };
    int matrix_2[2][3] = {
        {2, 6, 0},
        {7, 9, 8}
    };
    int numberOfColumns1 = (sizeof(*matrix_1)/sizeof(int));
    int numberOfColumns2 = (sizeof(*matrix_2)/sizeof(int));
    int numberOfRows = ((sizeof(matrix_1)/sizeof(int))/numberOfColumns1);
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns2; j++) {
            int element = 0;
            for (int k = 0; k < numberOfColumns1; k++) {
                element += matrix_1[i][k]*matrix_2[k][j];
            }
            printf("%-3d  ", element);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}