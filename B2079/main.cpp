// luogu b2079

#include <iostream>
#include <iomanip>

using namespace std;

long long fac(int x) {
    long long result{1};
    for (int i{1}; i <= x; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    double e{1};
    for (int i{1}; i <= n; ++i) {
        e += (1.0 / (double) fac(i));
    }
    cout << fixed << setprecision(10) << e << endl;
    return 0;
}
