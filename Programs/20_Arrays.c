#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declaration + initialization of an array of datatype int.
    // Meaning every elements in the array should be of int data type.
    // If not, then the element will be implicitly casted into declared datatype of array, 
    // which is int in this case.
    // The size of the array is 3, meaning maximum 3 elements are to be stored in the array.
    int b = 6;
    // Below is the compile time initialization of an array.
    int a[3] = {1, 2, 3.5}; // Any extra elements will be ignored by the compiler as no memory is allocated for it.
    for (int i = 1; i <= 3; i++) {
        printf("%d\n", i);
    }
    // int a2[]; --> In this case the compiler will give an error i.e. (error: array size missing in 'b')
    int a2[] = {4, 5, 6}; // In this case compiler will evaluate the size referencing the number of elements passed.
    system("pause");
    return 0;
}