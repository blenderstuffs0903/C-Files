#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    printf("Minimum Values\n");
    printf("==================================\n");
    printf("char: %d\n", CHAR_MIN);
    printf("short: %d\n", SHRT_MIN);
    printf("int: %d\n", INT_MIN);
    printf("long: %ld\n", LONG_MIN);
    printf("long long: %lld\n", LLONG_MIN);
    printf("==================================\n");
    printf("Maximum Values\n");
    printf("char: %d\n", CHAR_MAX);
    printf("short: %d\n", SHRT_MAX);
    printf("int: %d\n", INT_MAX);
    printf("long: %ld\n", LONG_MAX);
    printf("long long: %lld\n", LLONG_MAX);
    printf("==================================\n");
    system("Pause");
    return 0;
} 