// luogu b2038

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    char c{};
    cin >> c;
    int judge{(int) c};
    if (judge % 2 == 0) {
        cout << "NO" << endl;
    } else {
        cout << "YES" << endl;
    }
    return 0;
}
