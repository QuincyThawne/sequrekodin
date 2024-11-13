#include <stdio.h>
#include <string.h>
void secure_function(char *input) {
 char buffer[10];
 // Use strncpy to prevent buffer overflow
 strncpy(buffer, input, sizeof(buffer) - 1);
 buffer[9] = '\0'; // Ensuring null termination
 printf("Buffer content: %s\n", buffer);
}
int main(int argc, char *argv[]) {
 if (argc > 1) {
 secure_function(argv[1]);
 } else {
 printf("Please provide an argument\n");
 }
 return 0;
}
