// luogu p1146

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    cout << n << endl;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            if (i != j) {
                if (a[j] != 0) {
                    a[j] = 0;
                } else {
                    a[j] = 1;
                }
            }
            cout << a[j];
        }
        cout << endl;
    }
    delete[] a;
    return 0;
}
