// luogu p5732

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int **a = new int *[n];
    for (int i = 0; i < n; ++i) {
        a[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            a[i][j] = 0;
        }
    }
    for (int i = 0; i < n; ++i) {
        a[i][0] = 1;
    }
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j <= i; ++j) {
            a[i][j] = a[i - 1][j - 1] + a[i - 1][j];
        }
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j <= i; ++j) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
    delete[] a;
    return 0;
}
