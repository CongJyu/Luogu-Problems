// luogu p1720

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << 1 << endl;
        return 0;
    }
    auto *a = new double[n];
    a[0] = 1;
    a[1] = 1;
    for (int i = 2; i < n; ++i) {
        a[i] = a[i - 1] + a[i - 2];
    }
    cout << fixed << setprecision(2) << a[n - 1] << endl;
    return 0;
}
