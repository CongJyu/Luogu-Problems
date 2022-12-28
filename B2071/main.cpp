// luogu b2071

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long a{}, b{}, c{};
    cin >> a >> b >> c;
    long long x{2};
    long long r_a, r_b, r_c;
    while (true) {
        r_a = a % x;
        r_b = b % x;
        r_c = c % x;
        if (r_a == r_b and r_b == r_c) {
            break;
        } else {
            x++;
        }
    }
    cout << x << endl;
    return 0;
}
