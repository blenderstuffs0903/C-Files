// WAP to read a 2D array of dimension 2x3 and display the array in matrix form and its sum.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[3][3];
    int numberOfColumns = (sizeof(*matrix)/sizeof(int));
    int numberOfRows = ((sizeof(matrix)/sizeof(int))/numberOfColumns);
    for (int i = 0; i < numberOfRows; i++) {
        printf("Enter elements of row %d.\n", i+1); 
        for (int j = 0; j < numberOfColumns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nMatrix before transpose:\n");
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\nMatrix after transpose:\n");
    for (int i = 0; i < numberOfColumns ; i++) {
        for (int j = 0; j < numberOfRows; j++) {
            printf("%d  ", matrix[j][i]);
        }
        printf("\n");
    }
    system("pause");
    return 0;
}