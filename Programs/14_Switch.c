#include <stdio.h>
#include <stdlib.h>

int main() {
    int day_number;
    printf("Enter a day number: ");
    scanf("%d", &day_number);
    switch (day_number) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        case 4:
            printf("Thursday\n");
            break;
        case 5:
            printf("Friday\n");
            break;
        case 7+4:
            printf("Saturday\n");
            break;
        case 7:
            printf("Sunday\n");
            break;
        default:
            printf("Enter a valid day number.\n");
            break;
    }
    return 0;
}