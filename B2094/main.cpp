// luogu b2094

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    long long *a{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    long long result{};
    for (int i{}; i < n; ++i) {
        if (a[i] != a[n - 1]) {
            result += a[i];
        }
    }
    cout << result << endl;
    delete[] a;
    return 0;
}
