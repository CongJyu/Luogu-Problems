// luogu b2011

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double a{}, b{};
    cin >> a >> b;
    cout << fixed << setprecision(9) << a / b << endl;
    return 0;
}
