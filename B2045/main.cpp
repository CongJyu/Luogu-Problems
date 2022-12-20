// luogu b2045

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{};
    cin >> x;
    if (x != 1 and x != 3 and x != 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
