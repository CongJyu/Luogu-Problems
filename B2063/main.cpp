// luogu b2063

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x{}, n{};
    cin >> x >> n;
    double result{static_cast<double>(x)};
    for (int i{}; i < n; ++i) {
        result *= 1.001;
    }
    cout << fixed << setprecision(4) << result << endl;
    return 0;
}
