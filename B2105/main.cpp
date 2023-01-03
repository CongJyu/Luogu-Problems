// luogu b2105

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, k{};
    cin >> n >> m >> k;
    int **a{new int *[n]};
    for (int i{}; i < n; ++i) {
        a[i] = new int[m];
    }
    int **b{new int *[m]};
    for (int i{}; i < m; ++i) {
        b[i] = new int[k];
    }
    int **c{new int *[n]};
    for (int i{}; i < n; ++i) {
        c[i] = new int[k];
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < k; ++j) {
            c[i][j] = 0;
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < m; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i{}; i < m; ++i) {
        for (int j{}; j < k; ++j) {
            cin >> b[i][j];
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < k; ++j) {
            for (int x{}; x < m; ++x) {
                c[i][j] += a[i][x] * b[x][j];
            }
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < k; ++j) {
            cout << c[i][j] << " ";
        }
        cout << endl;
    }
    delete[] a;
    delete[] b;
    delete[] c;
    return 0;
}
