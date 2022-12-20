// luogu p1428

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *a = new int[n];
    int *lovely = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < i; ++j) {
            if (a[j] < a[i]) {
                lovely[i]++;
            }
        }
    }
    for (int i = 0; i < n; ++i) {
        cout << lovely[i] << " ";
    }
    cout << endl;
    delete[] a;
    delete[] lovely;
    return 0;
}
