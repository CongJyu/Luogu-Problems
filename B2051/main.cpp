// luogu b2051

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{}, y{};
    cin >> x >> y;
    if (x > 1 or x < -1 or y > 1 or y < -1) {
        cout << "no" << endl;
    } else {
        cout << "yes" << endl;
    }
    return 0;
}
