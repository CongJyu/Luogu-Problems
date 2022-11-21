// luogu b2027

#include <iostream>
#include <iomanip>

using namespace std;

const double Pi = 3.14;

int main() {
    ios::sync_with_stdio(false);
    int r{};
    cin >> r;
    double v{4.0 / 3.0 * Pi * r * r * r};
    cout << fixed << setprecision(5) << v << endl;
    return 0;
}
