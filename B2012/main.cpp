// luogu b2012

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double a{}, b{};
    cin >> a >> b;
    cout << fixed << setprecision(3) << (b * 100) / a << "%" << endl;
    return 0;
}
