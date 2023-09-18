#include <stdio.h>

// functions to be declared before main function
int add(int num1, int num2) {
    return num1+num2;
}
// We can also declare a function before main function and define it after it using function prototype.
int subtract(int num1, int num2);

// If a function doesn't return anything we can use 'void' keyword.
void hello_world() {
    printf("Hello World!\n");
}

int main() {
    int a = 5;
    int b = 3;
    // num1 and num2 are parameters, a and b are arguments.
    int sum = add(a, b);
    printf("%d + %d = %d\n", a, b, sum);
    printf("%d - %d = %d\n", a, b, subtract(a, b));
    hello_world();
    return 0;
}
int subtract(int num1, int num2) {
    return num1 - num2;
}