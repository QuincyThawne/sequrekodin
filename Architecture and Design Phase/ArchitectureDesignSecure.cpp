#include <iostream>
#include <fstream>
#include <string>
#include <openssl/sha.h> // OpenSSL library for hashing
using namespace std;
string hashPassword(const string& password) {
 unsigned char hash[SHA256_DIGEST_LENGTH];
 SHA256((unsigned char*)password.c_str(), password.length(), hash);
 string hashedPassword;
 for (int i = 0; i < SHA256_DIGEST_LENGTH; i++) {
 char buffer[3];
 sprintf(buffer, "%02x", hash[i]);
 hashedPassword += buffer;
 }
 return hashedPassword;
}
void storeUserData(const string& username, const string& hashedPassword) {
 ofstream file("user_data.txt", ios::app);
 file << username << " " << hashedPassword << endl; // Storing hashed password
 file.close();
 cout << "User data stored securely." << endl;
}
int main() {
 string username, password;
 cout << "Enter username: ";
 cin >> username;
 cout << "Enter password: ";
 cin >> password;
 string hashedPassword = hashPassword(password);
 storeUserData(username, hashedPassword);
 return 0;
}
