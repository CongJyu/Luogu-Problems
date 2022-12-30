// luogu b2091

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]}, *b{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < n; ++i) {
        cin >> b[i];
    }
    int result{};
    for (int i{}; i < n; ++i) {
        result += a[i] * b[i];
    }
    cout << result << endl;
    delete[] a;
    delete[] b;
    return 0;
}
