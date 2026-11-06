#include <iostream>
using namespace std;

int main() {
    string username, password;

    // Predefined username and password
    string correctUsername = "marsh";
    string correctPassword = "3675";

    do {
        cout << "Enter username: "<<endl;
        cin >> username;

        cout << "Enter password: "<<endl;
        cin >> password;

        if (username == correctUsername && password == correctPassword) {
            cout << "Access Granted" << endl;
        } else {
            cout << "Incorrect credentials, try again" << endl;
        }

    } while (username != correctUsername || password != correctPassword);

    return 0;
}

