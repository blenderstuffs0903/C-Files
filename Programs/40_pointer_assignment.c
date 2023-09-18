#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10, b = 11;
    int *p, *q;
    p = &a, q = &b;
    *q = *p;
    printf("a = %d", *p);
    return 0;
}