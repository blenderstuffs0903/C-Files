#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void display_grid(int grid_values[]) {
    
}

int main() {
    char a[3][3] = {
        {'X', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', 'O', 'X'}
    };

    int k = 0;
    for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 17; j++) {
            if (j % 6 == 0) {
                printf("|");
            } else if (i % 2 == 0 && i != 6) {
                printf("_");
            } else if (j % 3 == 0 && i != 6) {
                printf("%c", *(a[0] + k));
                k++;
            }
            else {
                printf(" ");
            }      
        }
        printf("\n");
    } 
    return 0;
}
/*
    X  |  O  |  X  
  _____|_____|_____
    O  |  X  |  O
  _____|_____|_____
    X  |  O  |  X
       |     | 
*/