// luogu p1420

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    int max_continue = 1, current = 1;
    for (int i = 1; i < n; ++i) {
        if (a[i] == a[i - 1] + 1) {
            current++;
        }
        if (current > max_continue) {
            max_continue = current;
        }
        if (a[i] != a[i - 1] + 1) {
            current = 1;
        }
    }
    cout << max_continue << endl;
    delete[] a;
    return 0;
}
