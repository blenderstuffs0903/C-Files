#include <stdio.h>

int main() {
    int matrix[3][3];
    int numberOfColumns = sizeof(*matrix)/sizeof(int);
    int numberOfRows = sizeof(matrix)/(3*sizeof(int));
    printf("%d, %d\n", numberOfColumns, numberOfRows);
    printf("Enter elements of matrix:\n");
    for (int i = 0; i < numberOfRows; i++) {
        printf("Enter elements of row %d\n", i+1);
        for (int j = 0; j < numberOfColumns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            printf("%d  ", matrix[j][i]);
        }
        printf("\n");
    }
    return(0);
}