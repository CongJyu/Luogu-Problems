// luogu b2020

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[5]{};
    for (int i{}; i < 5; ++i) {
        cin >> a[i];
    }
    int eaten{};
    for (int i{}; i < 5; ++i) {
        if (a[i] % 3 == 0) {
            a[i] /= 3;
            if (i == 0) {
                a[4] += a[i];
            } else {
                a[i - 1] += a[i];
            }
            if (a[i] == 4) {
                a[0] += a[i];
            } else {
                a[i + 1] += a[i];
            }
        } else {
            eaten += a[i] % 3;
            a[i] /= 3;
            if (i == 0) {
                a[4] += a[i];
            } else {
                a[i - 1] += a[i];
            }
            if (a[i] == 4) {
                a[0] += a[i];
            } else {
                a[i + 1] += a[i];
            }
        }
    }
    for (int i{}; i < 5; ++i) {
        cout << a[i] << " ";
    }
    cout << endl << eaten << endl;
    return 0;
}
