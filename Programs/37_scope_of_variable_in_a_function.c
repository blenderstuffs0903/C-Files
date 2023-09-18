#include <stdio.h>

int a = 5; // Global Variables(a) can be accessed anywhere in the program
int b = 6;

void local() {
    // 'a' variable can be accessed in local() function bcz it is a global variable.
    int b = 7; 
    printf("Local b = %d\n", b);
    // Even if 'b' is a global variable, once we redeclare it with a new value, a new variable b with different scope
    // will be created without overwriting the value of the global ones. Now any change we make in 'b' variable
    // won't get reflected to global 'b'. We can still access the global 'b' outside local(). 
    int c = a + 6; // c is a local variable and can only be accessed in the local() function.
    // Here 'a' is a global variable.
    printf("Local c = %d\n", c);
}

int main() {
    local();
    printf("Global a = %d\n", a);
    printf("Global b = %d\n", b); // This b variable is the global one, not from the local function.
    return 0;
}