#include <stdio.h>

int main() {
    int array[] = {15, 16, 6, 8, 5}; // {5, 6, 8, 15, 16} i3, j3
    for (int i = 0; i < (sizeof(array)/sizeof(int) - 1); i++) {
        for (int j = 0; j < sizeof(array)/sizeof(int) - 1; j++) {
            if (array[j] > array[j+1]) {
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for (int i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}