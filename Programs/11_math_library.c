#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    double a = sqrt(9);
    double b = pow(2, 3);
    int c = round(3.14);
    int d = ceil(3.14);
    int e = floor(3.14);
    double f = fabs(-100);
    double g = log(10);
    double h = sin(45);
    double i = cos(45);
    double j = tan(45);
    printf("Square root of 9 is %.2lf\n", a);
    printf("2 raised to power 3 is %.2lf\n", b);
    printf("%d\n", c);
    printf("%d\n", d);
    printf("%d\n", e);
    printf("%.2lf\n", f);
    printf("%.2lf\n", g);
    printf("%.2lf\n", h);
    printf("%.2lf\n", i);
    printf("%.2lf\n", j);
    system("pause");
    return 0;
}