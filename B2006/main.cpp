// luogu b2006

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x{}, a{}, y{}, b{};
    cin >> x >> a >> y >> b;
    double result{(a * x - b * y) / (a - b)};
    cout << fixed << setprecision(2) << result << endl;
    return 0;
}
