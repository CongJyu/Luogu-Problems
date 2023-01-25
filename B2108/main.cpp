// luogu b2108

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int **a{new int *[n]};
    for (int i{}; i < n; ++i) {
        a[i] = new int[m];
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i{1}; i < n - 1; ++i) {
        for (int j{1}; j < m - 1; ++j) {
            a[i][j] = (a[i - 1][j] + a[i + 1][j] + a[i][j - 1] + a[i][j + 1]) / 4;
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    delete[] a;
    return 0;
}
