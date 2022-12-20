// luogu b2026

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double a{}, b{};
    cin >> a >> b;
    cout << fmod(a, b) << endl;
    return 0;
}
