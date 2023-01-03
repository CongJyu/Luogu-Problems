// luogu b2104

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> n >> m;
    int **a{new int *[n]}, **b{new int *[n]};
    for (int i{}; i < n; ++i) {
        a[i] = new int[m];
        b[i] = new int[m];
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> b[i][j];
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            a[i][j] += b[i][j];
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    delete[] a;
    delete[] b;
    return 0;
}
