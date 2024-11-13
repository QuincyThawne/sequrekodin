#include <stdio.h>
#include <stdlib.h>
void memory_leak() {
 int *leak = (int *)malloc(sizeof(int) * 10); // Memory allocated but not freed
}
void invalid_access() {
 int *array = (int *)malloc(sizeof(int) * 5);
 array[5] = 10; // Invalid access outside the allocated memory
}
int main() {
 memory_leak();
 invalid_access();
 return 0;
}
