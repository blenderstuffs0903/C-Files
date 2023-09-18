#include <stdio.h>
#include <stdlib.h>

int main()
{
    // 1--> When scanf reads a value of any data type it leaves a newline character in the buffer
    int x;
    char c;
    scanf("%d", &x); // read 1 and leaves a newline character in the buffer
    scanf("%c", &c); // and that newline character is read by this scanf and stored in the variable c.
    printf("x=%d\n", x); // prints the value of x
    printf("char=new-->%c<--line\n", c); // we can see here that a newline is printed.

    // 2--> While entering a value of any data type except char any leading whitespace/s(spaces, tabs, newline, etc) is ignored and truncated.
    // 3--> If we include any whitespaces b/w a value of any datatype(except char), scanf() terminates reading further and the rest of the value including the whitespace is saved in the buffer.
    //      In point 1, you might think why the newline is saved in the buffer. Well thats bcz, when you press enter to confirm the value, you are actually passing a newline character to tell scanf that's the end and the newline character is stored in the buffer.
    //      However, this behaviour can be changed.
    char str1[20];
    scanf("%[ ABab]", str1);
    printf("%s", str1);
    // In the above example scanf will continue reading characters as long as it belongs to the character in the [].
    // If it encounters a character not mentioned b/w [], scanf will terminate there and the rest of the character will be stored in the buffer including that buffer.
    // notice a blank space before 'A' b/w the square bracket. this means we can also enter blank space as input.
    char str2[20];
    scanf("%[^\n]", str1);
    printf("%s", str1);
    // In the above example scanf will continue reading as long as we don't pass any of the character mentioned b/w the square bracket.
    // In this case the scanf will terminate reading as we pass a newline character(\n) i.e. when we press enter key.
    // This method is the compliment of the previous method.

    // MORE ON SCANF FUNCTION
    // 1--> Return value: It returns an integer type, the number of successfully matched and assigned input items.
    int i, j, n;
    n = scanf("%d %d", &i, &j);
    printf("i = %d\n", i);
    printf("j = %d\n", j);
    printf("Number of successful"
            " inputs : %d\n", n);
    return 0;
}