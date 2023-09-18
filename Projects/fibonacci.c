#include <stdio.h>

int main() {
    int x = 0;
    int y = 1;
    int n;
    printf("How many terms of fibonacci series to be displayed?");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("%d ", x);
        printf("%d ", y);
        x += y;
        y += x;
    }
    return 0;
}