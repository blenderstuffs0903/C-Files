#include <stdio.h>
#include <stdlib.h>

int main()
{
    system("cls");
    {
        // 1. Increament/Decreament of a Pointer
        int a = 10;
        int *p = &a;
        printf("Increament/Decreament of a Pointer\n");
        printf("p = %u\n", p);
        p++; // This is euivalent to: (current_address_stored_in_p + (sizeof(int) * 1))
        printf("p = %u\n", p);
        p--; // This is euivalent to: (current_address_stored_in_p - (sizeof(int) * 1))
        printf("p = %u\n\n", p);
    }
    {
        // 2. Addition/Subtraction of a Integer to a Pointer
        int a = 20;
        int *p = &a;
        printf("Addition of a Integer to a Pointer\n");
        printf("p = %u\n", p);
        p = p + 5; // This is euivalent to: (current_address_stored_in_p + (sizeof(int) * 5))
        printf("p = %u\n", p);
        p = p - 5; // This is euivalent to: (current_address_stored_in_p - (sizeof(int) * 5))
        printf("p = %u\n\n", p);
    }
    {
        // 3. Subtraction of Two Pointers
        int a = 10, b = 20, n;
        int *ptr1, *ptr2, *ptr3;
        ptr1 = &a;
        ptr2 = &a;
        ptr3 = &b;
        printf("Subtraction of Two Pointers\n");
        printf("ptr1 = %u, ptr2 = %u, ptr3 = %u\n", ptr1, ptr2, ptr3);
        n = ptr1 - ptr3; // This is equivalent to (Difference_btw_ptr1_&_ptr2 / sizeof(int))
        printf("ptr1 - ptr3 = %d\n", n);
        printf("ptr1 - ptr2 = %d\n\n", ptr1 - ptr2); // Will be 0 bcz ptr1 & ptr2 stores the same memory location. 
    }
    {
        // 4. Comparision of Pointers
        int a = 10, b = 20;
        int *ptr1, *ptr2;
        ptr1 = &a;
        ptr2 = &a;
        printf("Comparision of Pointers\n");
        printf("ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);
        if (ptr1 == ptr2) {
            printf("ptr1 and ptr2 points to the same memory address.\n");
        }
        // We can also use the comparision operators like: <, >, <=, >= ...
    }
    return 0;
}