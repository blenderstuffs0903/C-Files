#include <stdio.h>
#include <stdlib.h>

int main() {
    int a[3];
    for (int i = 0; i < 3; i++) {
        scanf("%d", &a[i]); // Runtime initialization of an array.
    }
    printf("\n");
    for (int i = 0; i < 3; i++) {
        printf("%d\n", a[i]);
    }
    system("pause");
    return 0;
}