#include <stdio.h>

int main(void) {
    int array[50];
    int N;
    int len = 0;
    int largest_len = 0;
    scanf(" %d", &N);

    for (int j = 0; j < N; j++)
    {
        scanf(" %d", &array[j]);
    }
    
    
    for (int j = 0; j < N; j++) {
        int sum = array[j];
        if (array[j] % 2 == 0) {
            len = 1;
        }
        for (int k = j + 1; k < N; k++) {
            if  ((sum + array[k]) % 2 == 0){
                if (len == 0) {
                    len++;
                }
                sum += array[k];
                len++;
            } else {
                break;
            }
        }
        if ((sum % 2 == 0) && (len > largest_len)) {
            largest_len = len;
        }
    }
    printf("%d\n", largest_len);
    largest_len = 0;
}

