#include <iostream>
#include <string>
using namespace std;
int main() {
 string password;
 cout << "Enter your password: ";
 cin >> password;
 
 // Sensitive data directly printed, no encryption or validation
 cout << "Your password is: " << password << endl;
 
 return 0;
}
