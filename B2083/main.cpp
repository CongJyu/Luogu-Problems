// luogu b2083

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    cin >> a >> b;
    char c{};
    cin >> c;
    int d{};
    cin >> d;
    for (int i{}; i < a; ++i) {
        if (i == 0 or i == a - 1) {
            for (int j{}; j < b; ++j) {
                cout << c;
            }
        } else {
            if (d != 0) {
                for (int j{}; j < b; ++j) {
                    cout << c;
                }
            } else {
                for (int j{}; j < b; ++j) {
                    if (j == 0 or j == b - 1) {
                        cout << c;
                    } else {
                        cout << " ";
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
