#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p, *q;
    p = &a;
    q = &b;
    printf("a = %d\n", a);
    *p = 15;
    printf("a = %d\n", a);
    printf("a = %d\n", *&a);
    printf("a = %d\n", *p);
    printf("address of a = %x\n", &a);
    printf("address of a = %p\n", &a);
    return 0;
}