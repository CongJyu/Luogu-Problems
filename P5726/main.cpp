// luogu p5726

#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    double total = 0;
    for (int i = 1; i < n - 1; ++i) {
        total += a[i];
    }
    cout << fixed << setprecision(2) << total / (n - 2) << endl;
    delete[] a;
    return 0;
}
