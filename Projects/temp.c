// Recursive Factorial
#include <stdio.h>

int factorial(int);

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", factorial(n));
    return 0;
}

int factorial(int num) {
    if (num == 1) {
        return 1;
    }
    return num * factorial(num - 1);
}
