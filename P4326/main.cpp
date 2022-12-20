// luogu p4326

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

const double pi{acos(-1)};

int main() {
    ios::sync_with_stdio(false);
    double n{};
    cin >> n;
    cout << fixed << setprecision(7);
    cout << n * n * pi << endl;
    cout << n * n * 2.0 << endl;
    return 0;
}
