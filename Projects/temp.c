// Recursive Factorial
#include <stdio.h>

struct Node
{
    int data;
    int *next;
};

void test() {
    printf("Enter a number: ");
    scanf("%d");
}

int main()
{
    char s[10];
    gets(s);
    printf(">%s<", s);
    if (s[0] == '\0') {
        printf("null");
    }
    return 0;
}