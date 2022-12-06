// luogu b2043

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{};
    cin >> x;
    if (x % (3 * 5 * 7) == 0) {
        cout << "3 5 7" << endl;
    } else if (x % (3 * 5) == 0) {
        cout << "3 5" << endl;
    } else if (x % (5 * 7) == 0) {
        cout << "5 7" << endl;
    } else if (x % (3 * 7) == 0) {
        cout << "3 7" << endl;
    } else if (x % 3 == 0) {
        cout << "3" << endl;
    } else if (x % 5 == 0) {
        cout << "5" << endl;
    } else if (x % 7) {
        cout << "7" << endl;
    } else {
        cout << "n" << endl;
    }
    return 0;
}
