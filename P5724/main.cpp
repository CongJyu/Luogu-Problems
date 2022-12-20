// luogu p5724

#include <iostream>
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
    int delta = a[n - 1] - a[0];
    cout << delta << endl;
    delete[] a;
    return 0;
}
