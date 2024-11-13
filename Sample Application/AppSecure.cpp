#include <iostream>
#include <string>
#include <regex>
#include <openssl/aes.h>
Using namespace std;
// Encrypt function using AES (simple example)
string encrypt(string input) {
 return "Encrypted(" + input + ")";
}
// Input validation function to check for at least one letter, one number, and one special character
bool is_valid_password(const string &input) {
 regex letter("[a-zA-Z]"); // At least one letter
 regex number("[0-9]"); // At least one number
 regex special("[^a-zA-Z0-9]"); // At least one special character
 
 // Check for minimum password length (e.g., 8 characters)
 if (input.length() < 8) {
 cout << "Password must be at least 8 characters long." << endl;
 return false;
 }
 // Check if the password contains at least one letter, number, and special character
 if (!regex_search(input, letter)) {
 cout << "Password must contain at least one letter." << endl;
 return false;
 }
 if (!regex_search(input, number)) {
 cout << "Password must contain at least one number." << endl;
 return false;
 }
 if (!regex_search(input, special)) {
 cout << "Password must contain at least one special character." << endl;
 return false;
 }
 return true;
}
int main() {
 string password;
 cout << "Enter your password: ";
 cin >> password;
 
 // Input validation
 if (!is_valid_password(password)) {
 cout << "Password does not meet the required criteria." << endl;
 return 1;
 }
 string encrypted_password = encrypt(password);
 cout << "Your encrypted password is: " << encrypted_password << endl;
 return 0;
}
