// luogu b2101

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    int **a{new int *[m]};
    for (int i{}; i < m; ++i) {
        a[i] = new int[n];
    }
    for (int i{}; i < m; ++i) {
        for (int j{}; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    int sum_up{};
    for (int i{}; i < m; ++i) {
        if (i == 0 or i == m - 1) {
            for (int j{}; j < n; ++j) {
                sum_up += a[i][j];
            }
        } else {
            for (int j{}; j < n; ++j) {
                if (j == 0 or j == n - 1) {
                    sum_up += a[i][j];
                }
            }
        }
    }
    cout << sum_up << endl;
    for (int i{}; i < m; ++i) {
        delete[] a[i];
    }
    delete[] a;
    return 0;
}
