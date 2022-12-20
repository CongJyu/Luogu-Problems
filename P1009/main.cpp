// luogu p1009
// WA

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long n = 0;
    cin >> n;
    unsigned long long fac = 1;
    for (unsigned long long i = 1; i <= n; ++i) {
        fac *= i;
    }
    cout << fac << endl;
    return 0;
}
