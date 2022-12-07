// luogu b2049

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
    cout << a[2] << endl;
    return 0;
}
