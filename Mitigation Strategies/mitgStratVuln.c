#include <stdio.h>
#include <stdlib.h>

void vuln_function(int **ptr)
{
    int *local_ptr=*ptr;
    free(local_ptr);
    *ptr=NULL;
}

int main() {
 int *ptr = (int*)malloc(sizeof(int)); // Allocate memory
 *ptr = 42; // Assign a value to the allocated memory
 printf("Before Vulnerability: *ptr= %d\n", *ptr);
 vuln_function(&ptr); 
 printf("After Vulnerability: *ptr= %d (Undefined behavior)\n", *ptr); // Use-After-Free
 if(ptr==NULL)
    printf("Pointer Successfully handled.\n");
 else
    printf("Vulnerability: Dangling pointer exists.\n");
 return 0;
}
