#include <stdio.h>
#include <stdlib.h>

int main() {
    // Different ways to initialize 2D arrays at compile time.
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix_2[][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    int matrix_3[2][3] = {}; // All the values will be initialized with 0.
    int matrix_4[2][3] = {0}; // All the values will be initialized with 0.
    int matrix_5[2][3] = {0, 0, 1, 1}; //--> {{0, 0, 1}, {1, 0, 0}} 
    int matrix_6[2][3] = {{0, 0}, {1, 1}}; //--> {{0, 0, 0}, {1, 1, 0}}
    int matrix_7[][3] = {0}; //--> {0, 0, 0}
    int matrix_8[][3] = {1, 2, 3}; //--> {1, 2, 3}
    int matrix_9[][3] = {1, 2, 3, 4}; //--> {{1, 2, 3}, {4, 0, 0}}
    printf("%llu\n", sizeof(matrix_8)/sizeof(int));
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++) {
            printf("%d  ", matrix_8[i][j]);
        }
        printf("\n");
    }

    
    
    // Arrangement of elements in memory. 
     // printf("%p\n", matrix);
    // printf("%p\n", &matrix[0][0]);
    // printf("%p\n", &matrix[0][1]);
    // printf("%p\n", &matrix[0][2]);
    // printf("%p\n", &matrix[1][0]);
    // printf("%p\n", &matrix[1][1]);
    // printf("%p\n", &matrix[1][2]);
    system("pause");
    return 0;
}