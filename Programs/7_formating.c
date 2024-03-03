#include <stdio.h>

int main()
{
    // Format Specifier(%) : Defines and formats a type of data to be displayed

    //  %c  = character
    //  %s  = string(arrays of characters)
    //  %f  = float
    //  %lf = double
    //  %d  = int
    //  %u = unsigned integer
    //  %lld = long long integer
    //  %llu = long long unsigned integer

    //  %.1 = decimal precision
    //  %1  = minimum field width
    //  %-  = left align

    float item_1 = 2.5;
    float item_2 = 7.555;
    float item_3 = 19.85;
    printf("%-7.2f\n", item_1);
    printf("%7.2f\n", item_2);
    printf("%-7.2f", item_3);
    printf("<=");
    return (0);
}
