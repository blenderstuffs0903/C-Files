#include <stdio.h>

int main()
{
    int x;
    printf("x = ");
    scanf("%d", &x);
    int y;
    printf("y = ");
    scanf("%d", &y);
    int max = x > y ? x : y;
    printf("%d is greater.", max);
    return (0);
}