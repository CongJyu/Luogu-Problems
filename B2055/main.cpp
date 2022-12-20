// luogu b2055

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    double sum{};
    for (int i{}; i < n; ++i) {
        double temp{};
        cin >> temp;
        sum += temp;
    }
    double ave{sum / n};
    cout << fixed << setprecision(4) << ave << endl;
    return 0;
}
