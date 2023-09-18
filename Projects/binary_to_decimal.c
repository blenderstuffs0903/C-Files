#include <stdio.h>

int main()
{
    int binary_number, temp, decimal_form = 0;
    printf("Enter a binary number: ");
    scanf("%d", &binary_number);
    temp = binary_number;
    int powers_of_2 = 1;
    while (temp > 0) {
        int remainder = temp % 10;
        decimal_form += (remainder * powers_of_2);
        powers_of_2 *= 2;
        temp /= 10;
    }
    printf("The decimal form of %d is %d", binary_number, decimal_form);
    return 0;
}
