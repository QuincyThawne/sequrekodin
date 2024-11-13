#include <iostream>
#include <fstream>
#include <string>
using namespace std;
void storeUserData(const string& username, const string& password) {
 ofstream file("user_data.txt", ios::app);
 file << username << " " << password << endl; // Storing passwords in plain text
 file.close();
 cout << "User data stored." << endl;
}
int main() {
 string username, password;
 cout << "Enter username: ";
 cin >> username;
 cout << "Enter password: ";
 cin >> password;
 storeUserData(username, password);
 return 0;
}
