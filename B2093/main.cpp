// luogu b2093

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
    int x{};
    cin >> x;
    int position{-1};
    for (int i{}; i < n; ++i) {
        if (a[i] == x) {
            position = i;
            break;
        }
    }
    cout << position << endl;
    delete[] a;
    return 0;
}
