// luogu b2030

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double x1{}, x2{}, y1{}, y2{};
    cin >> x1 >> y1 >> x2 >> y2;
    double len{sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2))};
    cout << fixed << setprecision(3) << len << endl;
    return 0;
}
