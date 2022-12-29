// luogu b2080

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    float x{};
    long long n{};
    cin >> x >> n;
    double result{};
    for (long long i{}; i <= n; ++i) {
        result += pow(x, i);
    }
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
