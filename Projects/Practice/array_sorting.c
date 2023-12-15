#include <stdio.h>

int main() {
    int array[9] = {2, 5, 1, 4, 3, 6, 9, 7, 8};
    for (int i = 1; i < 9; i++) {
        for (int j = 0; j < 8; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }
    for (int i = 0; i < 9; i++) {
        printf("%d  ", array[i]);
    }
    return 0;
}