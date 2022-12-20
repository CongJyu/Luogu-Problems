// luogu b2044

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3]{};
    int count{};
    for (int i{}; i < 3; ++i) {
        cin >> a[i];
        if (a[i] < 60) {
            count++;
        }
    }
    if (count == 1) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
