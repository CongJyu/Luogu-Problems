// luogu b2031

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x1{}, x2{}, x3{}, y1{}, y2{}, y3{};
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double a{sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))};
    double b{sqrt((x1 - x3) * (x1 - x3) + (y1 - y3) * (y1 - y3))};
    double c{sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3))};
    double p{(a + b + c) / 2.0};
    double s{sqrt(p * (p - a) * (p - b) * (p - c))};
    cout << fixed << setprecision(2) << s << endl;
    return 0;
}
