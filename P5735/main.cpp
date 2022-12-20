// luogu p5735

#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double distance(double a1, double b1, double a2, double b2) {
    double dis = sqrt((a1 - a2) * (a1 - a2) + (b1 - b2) * (b1 - b2));
    return dis;
}

int main() {
    ios::sync_with_stdio(false);
    double x1 = 0, x2 = 0, x3 = 0, y1 = 0, y2 = 0, y3 = 0;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
    double circle = distance(x1, y1, x2, y2) +
                    distance(x1, y1, x3, y3) +
                    distance(x2, y2, x3, y3);
    cout << fixed << setprecision(2) << circle << endl;
    return 0;
}
