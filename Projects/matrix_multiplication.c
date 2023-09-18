#include <stdio.h>

int main() {
    int matrix1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int matrix2[3][2] = {
        {1, 2},
        {3, 4},
        {5, 6}
    };
    int col = sizeof(matrix2[0])/sizeof(int);
    int row = sizeof(matrix2)/(2*sizeof(int));
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            int ele = 0;
            for (int k = 0; k < row; k++) {
                ele += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", ele);
        }
        printf("\n");
    }
    return 0;
}