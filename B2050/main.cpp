// luogu b2050

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3]{};
    for (int i{}; i < 3; ++i) {
        cin >> a[i];
    }
    sort(a, a + 3);
    if (a[0] + a[1] > a[2] and a[2] - a[1] < a[0]) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
