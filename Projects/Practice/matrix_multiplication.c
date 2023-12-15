#include <stdio.h>

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
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            int ele = 0;
            for (int k = 0; k < 2; k++) {
                ele += matrix_1[i][k] * matrix_2[k][j];
            }
            printf("%d  ", ele);
        }
        printf("\n");
    }
    return(0);
}