// luogu p1888

#include <iostream>

using namespace std;

long long gcd(long long x, long long y) {
    return y ? gcd(y, x % y) : x;
}

int main() {
    ios::sync_with_stdio(false);
    long long a[3], min_v, max_v;
    cin >> a[0] >> a[1] >> a[2];
    max_v = a[0];
    min_v = a[0];
    long long i;
    for (i = 0; i < 3; ++i) {
        if (a[i] > max_v) {
            max_v = a[i];
        }
        if (a[i] < min_v) {
            min_v = a[i];
        }
    }
    i = gcd(min_v, max_v);
    while (i != 1) {
        min_v /= i;
        max_v /= i;
        i = gcd(min_v, max_v);
    }
    cout << min_v << "/" << max_v << endl;
    return 0;
}
