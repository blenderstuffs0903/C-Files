#include <stdio.h>
#include <stdlib.h>

int main() {
    int age;
    printf("Enter your age: ");
    scanf("%d", age);
    if ((age >= 0) && (age <= 12)) {
        printf("");
    }
    system("pause");
    return 0;
}