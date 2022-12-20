// luogu p1317

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int cnt{};
    bool lf{false};
    for (int i{1}; i < n - 1; ++i) {
        if (a[i - 1] > a[i] and a[i] >= a[i + 1]) {
            lf = true;
            continue;
        }
        if ((lf or a[i - 1] > a[i]) and a[i] < a[i + 1]) {
            cnt++;
            lf = false;
        }
    }
    cout << cnt << endl;
    delete[] a;
    return 0;
}
