// luogu b2089

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
        b[i] = a[n - i - 1];
    }
    for (int i{}; i < n; ++i) {
        cout << b[i] << " ";
    }
    cout << endl;
    delete[] a;
    delete[] b;
    return 0;
}
