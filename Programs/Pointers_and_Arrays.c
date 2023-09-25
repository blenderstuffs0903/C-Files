#include <stdio.h>

int main()
{
    {
        // -->Array name as a pointer
        int array[] = {1, 2, 3};
        // Here the array name 'array' actually is a pointer which points to the first element of the array.
        // Therefore we can access the first element by using * op with the array name;
        printf("array[0] = %d\n", *array);
        // Since elements of arrays are contiguously stored, we can access other elements by increamenting by n, 
        // where n is the index of the element.
        printf("array[1] = %d\n", *(array + 1));
        printf("array[2] = %d\n", *(array + 2));
    }
    {
        
    }
    return 0;
}