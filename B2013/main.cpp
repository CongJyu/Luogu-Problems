// luogu b2013

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double f{};
    cin >> f;
    double c{5 * (f - 32) / 9};
    cout << fixed << setprecision(5) << c << endl;
    return 0;
}
