// luogu p1614

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, m = 0;
    cin >> n >> m;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    long long min_value = 100000000000;
    for (long long i = 0; i <= n - m; ++i) {
        long long total = a[i];
        for (long long j = i + 1; j < i + m; ++j) {
            total += a[j];
        }
        if (total < min_value) {
            min_value = total;
        }
    }
    cout << min_value << endl;
    delete[] a;
    return 0;
}
