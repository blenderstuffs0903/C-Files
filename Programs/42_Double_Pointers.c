#include <stdio.h>

int main()
{
    int a = 10;
    int *ptr = &a;
    int **d_ptr = &ptr;
    printf("a = %d\n", a);
    printf("a = %d\n", *ptr);
    printf("a = %d\n", **d_ptr);
    
    // Multilevel Pointer
    int ***ml_ptr = &d_ptr;
    printf("a = %d\n", ***ml_ptr); 
    return 0;
}