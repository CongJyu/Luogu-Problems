// luogu b2047

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x{}, y{};
    cin >> x;
    if (x >= 0 and x < 5) {
        y = -x + 2.5;
    } else if (x >= 5 and x < 10) {
        y = 2 - 1.5 * (x - 3) * (x - 3);
    } else if (x >= 10 and x < 20) {
        y = x / 2 - 1.5;
    }
    cout << fixed << setprecision(3) << y << endl;
    return 0;
}
