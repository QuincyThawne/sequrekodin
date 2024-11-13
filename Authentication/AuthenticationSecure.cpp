#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool isValidPassword(const string &password) {
 if (password.length() < 8) return false;
 bool hasUpper = false, hasLower = false, hasDigit = false;
 for (char c : password) {
 if (isupper(c)) hasUpper = true;
 if (islower(c)) hasLower = true;
 if (isdigit(c)) hasDigit = true;
 }
 return hasUpper && hasLower && hasDigit;
}
bool login(string username, string password) {
 string storedPassword = "Str0ngP@ssw0rd";
 return password == storedPassword;
}
int main() {
 string username, password;
 cout << "Enter username: ";
 cin >> username;
 cout << "Enter password: ";
 cin >> password;
 
if (!isValidPassword(password)) {
 cout << "Weak password. Use at least 8 characters with upper, lower, and digit." << endl;
 return 0;
 }
 if (login(username, password)) {
 cout << "Login successful!" << endl;
 } else {
 cout << "Login failed." << endl;
 }
 return 0;
}
