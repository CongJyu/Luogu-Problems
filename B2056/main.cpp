// luogu b2056

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    double sum{}, ave;
    for (int i{}; i < n; ++i) {
        int temp{};
        cin >> temp;
        sum += temp;
    }
    ave = sum / n;
    cout << fixed << setprecision(0) << sum << " ";
    cout << fixed << setprecision(5) << ave << endl;
    return 0;
}
