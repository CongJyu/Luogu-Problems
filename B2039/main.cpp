// luogu b2039

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long x{}, y{};
    cin >> x >> y;
    if (x - y > 0) {
        cout << ">" << endl;
    } else if (x - y == 0) {
        cout << "=" << endl;
    } else {
        cout << "<" << endl;
    }
    return 0;
}
