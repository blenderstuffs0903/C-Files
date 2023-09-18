#include <stdio.h>

int main() {
    char string[] = "Hello World";
    char string_2[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("\nWith printf function\n");
    printf("==================\n");
    printf("(%s)\n(%.5s)\n(%10.5s)\n", string, string, string);
    printf("==================\n");
    printf("\nWith puts function\n");
    printf("==================\n");
    puts(string_2);
    puts(string_2);
    printf("==================\n");

    return 0;
}