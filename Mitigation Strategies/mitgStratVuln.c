#include <stdio.h>
#include <stdlib.h>
int main() {
 int *ptr = (int*)malloc(sizeof(int)); // Allocate memory
 *ptr = 42; // Assign a value to the allocated memory
 printf("Value: %d\n", *ptr);
 free(ptr); 
 printf("Value after free: %d\n", *ptr); // Use-After-Free
 *ptr = 100; // Writing to freed memory
 // Program may still proceed, leading to undefined behavior
 printf("New value: %d\n", *ptr); // This could crash the program or give garbage
 return 0;
}
