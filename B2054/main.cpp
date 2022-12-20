// luogu b2054

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    double sum{};
    for (int i{}; i < n; ++i) {
        int age_temp{};
        cin >> age_temp;
        sum += age_temp;
    }
    double ave{sum / n};
    cout << fixed << setprecision(2) << ave << endl;
    return 0;
}
