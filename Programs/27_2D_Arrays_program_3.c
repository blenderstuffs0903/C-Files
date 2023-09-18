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
    printf("\nFollowing matrix was entered:\n\n");
    for (int i = 0; i < numberOfRows; i++) {
        for (int j = 0; j < numberOfColumns; j++) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < numberOfRows; i++) {
        int rowSum = 0;
        for (int j = 0; j < numberOfColumns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row_%d sum = %d\n", i + 1 , rowSum);
    }
    for (int i = 0; i < numberOfColumns; i++) {
        int columnSum = 0;
        for (int j = 0; j < numberOfRows; j++) {
            columnSum += matrix[j][i];
        }
        printf("column_%d sum = %d\n", i + 1 , columnSum);
    }
    system("pause");
    return 0;
}