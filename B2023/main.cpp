// luogu b2023

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    char a{};
    int b{};
    float c{};
    double d{};
    cin >> a >> b >> c >> d;
    cout << a << " " << b << fixed << setprecision(6) << " " << c << " " << d << endl;
    return 0;
}
