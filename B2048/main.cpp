// luogu b2048

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{};
    char c{};
    cin >> x >> c;
    int total{};
    if (x <= 1000) {
        total = 8;
    } else {
        total += 8;
        x -= 1000;
        while (x >= 500) {
            total += 4;
            x -= 500;
        }
        if (x > 0) {
            total += 4;
        }
    }
    if (c == 'y') {
        total += 5;
    }
    cout << total << endl;
    return 0;
}
