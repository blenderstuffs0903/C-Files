#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int *p, *q;
    p = &a;
    q = &b;
    printf("a = %d\n", a);
    *p = 15;
    printf("a = %d\n", a);
    printf("a = %d\n", *p); // Dereferencing Pointer 'p' using indirectional operator '*'.
    printf("a = %d\n", *&a); // Indrectional operator '*' takes a memory location as operand and returns the value stored in that location. 
    printf("address of a = %x\n", &a);
    printf("address of a = %p\n", &a);
    return 0;
}