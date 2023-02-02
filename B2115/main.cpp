// luogu b2115

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string password;
    getline(cin, password);
    for (int i{}; i < password.length(); ++i) {
        if (password[i] == 'a') {
            cout << 'z';
            continue;
        }
        if (password[i] == 'A') {
            cout << 'Z';
            continue;
        }
        if ((password[i] >= 'a' and password[i] <= 'z') or (password[i] >= 'A' and password[i] <= 'Z')) {
            cout << (char) ((int) password[i] - 1);
        } else {
            cout << password[i];
        }
    }
    cout << endl;
    return 0;
}
