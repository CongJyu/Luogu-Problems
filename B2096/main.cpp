// luogu b2096

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    int *count{new int[a[n - 1] + 1]};
    for (int i{}; i < n; ++i) {
        count[a[i]]++;
    }
    for (int i{}; i < a[n - 1] + 1; ++i) {
        cout << count[i] << endl;
    }
    delete[] a;
    delete[] count;
    return 0;
}
