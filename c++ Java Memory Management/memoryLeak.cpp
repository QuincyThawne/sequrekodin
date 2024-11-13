#include <iostream>
void createLeak() {
 int* ptr = new int[10]; // Dynamically allocated memory
 // No delete operation to free memory
}
int main() {
 createLeak();
 std::cout << "Memory leak created.\n";
 return 0;
}
