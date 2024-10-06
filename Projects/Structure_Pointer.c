// C program to illustrate the structure pointer 
#include <stdio.h> 

// structure declaration 
struct Point { 
	int x, y; 
}; 

int main() 
{ 
	struct Point str = { 1, 2 }; 

	// p2 is a pointer to structure p1 
	struct Point* ptr = &str; 

    printf("%p\n", str);

	// Accessing structure members using structure pointer 
	printf("%d %d", ptr->x, ptr->y); 

	return 0; 
}
