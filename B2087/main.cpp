// luogu b2087

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
    int m{}, counter{};
    cin >> m;
    for (int i{}; i < n; ++i) {
        if (a[i] == m) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
