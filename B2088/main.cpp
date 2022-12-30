// luogu b2088

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double total{};
    double price[10]{28.9, 32.7, 45.6, 78, 35, 86.2, 27.8, 43, 56, 65};
    int a[10]{};
    for (int i{}; i < 10; ++i) {
        cin >> a[i];
    }
    for (int i{}; i < 10; ++i) {
        total += a[i] * price[i];
    }
    cout << fixed << setprecision(1) << total << endl;
    return 0;
}
