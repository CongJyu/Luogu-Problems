// luogu b2053

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double a{}, b{}, c{};
    cin >> a >> b >> c;
    cout << fixed << setprecision(5);
    if (b * b - 4 * a * c == 0) {
        cout << "x1=x2=" << -b / (2 * a) << endl;
    } else if (b * b - 4 * a * c < 0) {
        cout << "No answer!" << endl;
    } else {
        double x1{(-b + sqrt(b * b - 4 * a * c)) / (2 * a)};
        double x2{(-b - sqrt(b * b - 4 * a * c)) / (2 * a)};
        if (x1 > x2) {
            cout << "x1=" << x2 << ";" << "x2=" << x1 << endl;
        } else {
            cout << "x1=" << x1 << ";" << "x2=" << x2 << endl;
        }
    }
    return 0;
}
