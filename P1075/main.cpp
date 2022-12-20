// luogu p1075

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long n = 0;
    cin >> n;
    if (n == 1 || n == 2) {
        cout << n << endl;
        return 0;
    }
    for (unsigned long long i = 2; i <= (unsigned long long) sqrt(n); ++i) {
        if (n % i == 0) {
            cout << n / i << endl;
            break;
        }
    }
    return 0;
}
