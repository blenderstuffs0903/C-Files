#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("Enter value of x: ");
    scanf("%d", &x);
    int y;
    printf("Enter value of y: ");
    scanf("%d", &y);
    
    if (x > y) {
        char z = 'x'; // Any variable declared in if block is local variable and cannot be used outside the if block. 
        printf("x is greater than y.\n");
    } else if(x == y) {
        printf("x is equal to y.\n");
    } else {
        printf("x is less than y.\n");
    }
    // printf("%c", z); --> Gives an error (z is undefined)
    system("pause");
    return 0;
}