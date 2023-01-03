// luogu b2103

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    int **a{new int *[m]};
    for (int i{}; i < m; ++i) {
        a[i] = new int[n];
    }
    int **b{new int *[m]};
    for (int i{}; i < m; ++i) {
        b[i] = new int[n];
    }
    for (int i{}; i < m; ++i) {
        for (int j{}; j < n; ++j) {
            cin >> a[i][j];
        }
    }
    for (int i{}; i < m; ++i) {
        for (int j{}; j < n; ++j) {
            cin >> b[i][j];
        }
    }
    int total{m * n}, same{};
    for (int i{}; i < m; ++i) {
        for (int j{}; j < n; ++j) {
            if (a[i][j] == b[i][j]) {
                same++;
            }
        }
    }
    cout << fixed << setprecision(2) << same * 100.0 / total << endl;
    delete[] a;
    delete[] b;
    return 0;
}
