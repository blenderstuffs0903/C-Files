#include <stdio.h>

void swap(int*, int*);

int main() {
    int a = 10, b = 20;
    printf( "Before swaping the values:\n"
            "a = %d\n"
            "b = %d\n\n", a, b);
    swap(&a, &b);
    printf( "After swaping the values:\n"
            "a = %d\n"
            "b = %d\n\n", a, b);
    return 0;
}

void swap(int *pt1, int *pt2) {
    int temp = *pt1;
    *pt1 = *pt2;
    *pt2 = temp;
}