#include <stdio.h>

int main()
{
    // -->Array name as a pointer
    int array[] = {1, 2, 3};
    // Here the array name 'array' actually is a pointer which points to the first element of the array.
    // Therefore we can access the first element by using * op with the array name;
    printf("array[0] = %d\n", *array);
    // Since elements of arrays are contiguously stored, we can access other elements by increamenting by n, 
    // where n is the index of the element.
    printf("array[1] = %d\n", *(array + 1));
    printf("array[2] = %d\n\n", *(array + 2));

    // Assigning to an array element using pointer
    array[0] = *(array + 2);
    *(array + 2) = *(array + 1);   
    printf("array[0] = %d\n", *(array + 0));
    printf("array[1] = %d\n", *(array + 1));
    printf("array[2] = %d\n\n", *(array + 2));
    
    // Pointer to an array
    {
        // Pointer to an integer
        int *p; 
        
        // Pointer to an array of 5 integers
        int (*ptr)[5]; 
        int arr[5] = {1, 2, 3, 4, 5};
        
        // Points to 0th element of the arr.
        p = arr;
        
        // Points to the whole array arr.
        ptr = &arr; 
        
        printf("p = %u, ptr = %u\n", p, ptr);
        printf("sizeof(p) = %llu, sizeof(*p) = %llu\n", sizeof(p), sizeof(*p));
        
        printf("p = %u, ptr = %u\n", p + 1, ptr + 1);
        printf("sizeof(ptr) = %llu, sizeof(*ptr) = %llu\n", sizeof(ptr), sizeof(*ptr));
        printf("%d", (*ptr)[4]);
    }
    return 0;
}