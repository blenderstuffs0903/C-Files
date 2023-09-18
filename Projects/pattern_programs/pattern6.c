#include <stdio.h>

int main() {
    int n, m;
    printf("Enter number of rows: ");
    scanf("%d", &n);
    printf("Enter number of columns: ");
    scanf("%d", &m);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if ((i+j) % 2 == 0) {
                printf("1");
            } else {
                printf("2");
            }
        }
        printf("\n");
    }
    return 0;
}