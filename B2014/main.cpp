// luogu b2014

#include <iostream>
#include <iomanip>

using namespace std;

const double pi{3.14159};

int main() {
    ios::sync_with_stdio(false);
    double r{};
    cin >> r;
    cout << fixed << setprecision(4);
    cout << 2 * r << " " << 2 * pi * r << " " << pi * r * r << endl;
    return 0;
}
