#include <iostream>
#include <string>
using namespace std;
bool login(string username, string password) {
 string storedPassword = "1234"; // Weak password
 return password == storedPassword;
}
int main() {
 string username, password;
 cout << "Enter username: ";
 cin >> username;
 cout << "Enter password: ";
 cin >> password;
 if (login(username, password)) {
 cout << "Login successful!" << endl;
 } else {
 cout << "Login failed. Weak password used." << endl;
 }
 return 0;
}
