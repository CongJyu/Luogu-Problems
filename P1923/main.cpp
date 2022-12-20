// luogu p1923

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, k = 0;
    cin >> n >> k;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    cout << a[k] << endl;
    delete[] a;
    return 0;
}
