#include <stdio.h>

int main() {
    int a[10] = {4, 2, 1, 3, 0, 5, 7, 9, 6, 8};
    // int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for (int i = 0; i <= 8; i++) {
        for (int j = i+1; j < 10; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}