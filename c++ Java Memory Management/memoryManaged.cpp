#include <iostream>
void noLeak() {
 int* ptr = new int[10]; // Dynamically allocated memory
 delete[] ptr; // Freeing memory
}
int main() {
 noLeak();
 std::cout << "Memory safely managed.\n";
 return 0;
}
