// luogu b2107

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
    for (int i{}; i < m; ++i) {
        for (int j{n - 1}; j >= 0; --j) {
            cout << a[j][i] << " ";
        }
        cout << endl;
    }
    delete[] a;
    return 0;
}
