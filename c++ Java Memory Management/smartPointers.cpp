#include <iostream>
#include <memory>
void safeMemory() {
 std::unique_ptr<int[]> ptr = std::make_unique<int[]>(10); // Automatically managed memory
}
int main() {
 safeMemory();
 std::cout << "Memory managed using smart pointers.\n";
 return 0;
}
