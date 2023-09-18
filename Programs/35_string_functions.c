#include <stdio.h>
#include <string.h>

int main() {
    char string1[] = "Hello";
    char string2[] = "World";
    
    // strlwr(string1);
    // strupr((string1));
    // strcat(string1, string2);
    // strncat(string1, string2, 3);
    strcpy(string1, string2);
    // strncpy(string1, string2, 2);

    // strset(string1, '_');
    // strnset(string1, '_', 2);
    // strrev(string1);

    printf("%d\n", strlen(string1));
    printf("%s\n", string1);
    return 0;
}