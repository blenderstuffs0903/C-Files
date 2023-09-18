// WAP to read an array of 10 integers and count the number of even and odd numbers
#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[10];
    printf("Enter 10 numbers\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &nums[i]);
    }
    int evenCount = 0;
    int oddCount = 0;
    for (int i = 0; i < 10; i++)
    {
        if (nums[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
    printf("Even count : %d\n", evenCount);
    printf("Odd count : %d\n", oddCount);
    
    system("pause");
    return 0;
}