#include <stdio.h>

char* lowerToUpper(char[]);

int main() {
    char c[] = "codestuffs";
    printf("%s", lowerToUpper(c));
    return 0;
}

char* lowerToUpper(char str[]) {
    int i = 0; 
    while (str[i] != '\0') {
        if ((str[i] >= 97) || (str[i] <= 122)) {
            char upper_case = 'A' + str[i] - 'a';
            str[i] = upper_case;
        }
        i++;
    }
    return str;
}