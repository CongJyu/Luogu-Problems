// luogu b2065

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int test_total{}, test_effect{};
    cin >> test_total >> test_effect;
    double x{test_effect * 1.0 / test_total};
    n--;
    while (n--) {
        int comp_total{}, comp_effect{};
        cin >> comp_total >> comp_effect;
        double y{comp_effect * 1.0 / comp_total};
        if (y - x > 0.05) {
            cout << "better" << endl;
        } else if (x - y > 0.05) {
            cout << "worse" << endl;
        } else {
            cout << "same" << endl;
        }
    }
    return 0;
}
