#include <stdio.h>
#include <stdlib.h>

int main() {
    char string_1[20];
    // Method 1
    // scanf("%[^\n]", string_1);
    // while (getchar() != '\n');
    // printf("%s\n", string_1);
    // Method 2
    // char string_2[5];
    // gets(string_2);
    // printf("->%s<-\n", string_2);
/*  The difference b/w method 1 & method 2 is that when we press enter (after typing some value or without any value)
    scanf and gets will both terminate reading but scanf will store a newline character in the buffer which was pressed
    enter whereas gets will clear the buffer.
    If we execute both the method at the same time, the newline character saved in the buffer by scanf will be read by
    gets function. As gets function also treats newline character as terminating point, it will ignore it and add a 
    null character as the first element of string 2. To prevent that the while loop is used.  
*/
// Scanf and gets function don't do any bound checking of the passes array. So if we enter characters of size more than 
// the allocated memory of the passed array, it will be stored beyond the allocated memory contiguously and overwrite 
// any other data .There is no way for gets to avoid such overflow, however there is a way with scanf by using fieldwidth:
    // char name[10];
    // scanf("%9s", name);
    // printf("%s", name);
    // In the above scanf the field width is set to 9 so if we try to enter more than 9 characters it will be truncated.
    // Even if the size of the 'name' array is 10, we set the field with to 9 bcz the last character should be reserved 
    // for null character. If we set the field width 10 and enter 10 characters the null character will be added in the
    // 11th position(index 10) which is still beyond the allocated memory. So it is safer to use field with in the range
    // 0 to n - 1, where n is the size of the array.

    // Method 3
    char name2[20];
    fgets(name2, 10, stdin);
    printf("->%s<-\n", name2);
    // When we press enter the newline character is also added to the entered string.
    // But for the following cases, no newline character is added:
        /*  (1) If we enter n characters(where n is the max limit(10 in this case)), the last character will be 
                truncated bcz the last character is reserved for null character.
            (2) If we enter n-1 characters there will be no space for the newline character as the last character is 
                reserver for the null character.*/ 
    // If we enter exactly 10 characters which is the 
    return 0;
}