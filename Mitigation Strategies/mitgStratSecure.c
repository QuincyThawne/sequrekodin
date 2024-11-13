#include <stdio.h>
#include <stdlib.h>
void secure_function(int **ptr) {
 if (*ptr != NULL) {
 free(*ptr); // Free the pointer only if it's not already NULL
 *ptr = NULL; // Set the pointer to NULL after freeing
 }
}
int main() {
 int *a = (int *)malloc(sizeof(int));
 *a = 10;
 printf("Before secure function: *a = %d\n", *a);
 
secure_function(&a);
 if (a == NULL)
 printf("Pointer successfully handled: *a is NULL\n");
 else
 printf("Vulnerability still exists: *a = %d\n", *a);
 return 0;
}
