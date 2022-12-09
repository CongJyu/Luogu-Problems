// luogu b2052

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    char opt{};
    cin >> a >> b >> opt;
    if (opt != '+' and opt != '-' and opt != '*' and opt != '/') {
        cout << "Invalid operator!" << endl;
    } else if (b == 0 and opt == '/') {
        cout << "Divided by zero!" << endl;
    } else {
        if (opt == '+') {
            cout << a + b << endl;
        } else if (opt == '-') {
            cout << a - b << endl;
        } else if (opt == '*') {
            cout << a * b << endl;
        } else if (opt == '/') {
            cout << a / b << endl;
        }
    }
    return 0;
}
