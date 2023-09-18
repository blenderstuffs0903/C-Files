// WAP to read a 2D array of dimension 2x3 and display the array in matrix form and its sum.
#include <stdio.h>
#include <stdlib.h>

int main() {
    int matrix[2][3];
    for (int i = 0; i < 2; i++) {
        printf("Enter elements of row %d.\n", i+1); 
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("\nFollowing matrix was entered:\n\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d  ", matrix[i][j]);
        }
        printf("\n");
    }
    int sum = 0;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += matrix[i][j];
        }
    }
    printf("\nThe sum is %d\n", sum);
    system("pause");
    return 0;
}