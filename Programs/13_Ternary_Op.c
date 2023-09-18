#include <stdio.h>
#include <stdlib.h>

int main() {
    int x;
    printf("x = ");
    scanf("%d", &x);
    int y;
    printf("y = ");
    scanf("%d", &y);
    int max = (x > y) ? x : y;
    printf("%d is greater\n", max);
    system("pause");
    return 0;
}