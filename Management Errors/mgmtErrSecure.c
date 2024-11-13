#include <stdio.h>
#include <stdlib.h>
void fixed_memory_leak() {
 int *leak = (int *)malloc(sizeof(int) * 10);
 if (leak != NULL) {
 // Perform operations with leak
 free(leak); // Free allocated memory to prevent leaks
 }
}
void fixed_invalid_access() {
 int *array = (int *)malloc(sizeof(int) * 5);
 if (array != NULL) {
 array[4] = 10; // Corrected access within allocated memory
 free(array); // Free the memory after use
 }
}
int main() {
 fixed_memory_leak();
 fixed_invalid_access();
 return 0;
}
