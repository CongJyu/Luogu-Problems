// luogu p5708

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double a = 0, b = 0, c = 0;
    cin >> a >> b >> c;
    double p = (a + b + c) / 2;
    double area = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << fixed << setprecision(1) << area << endl;
    return 0;
}
