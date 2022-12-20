// luogu p1422
// WA

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double total = 0;
    cin >> total;
    double fee = 0;
    if (total <= 150) {
        fee = 0.4463 * total;
    } else if (total >= 151 && total <= 400) {
        fee = 0.4463 * 150 + (total - 150) * 0.4663;
    } else if (total >= 401) {
        fee = 0.4463 * 150 + 250 * 0.4663 + (total - 400) * 0.5663;
    }
    cout << fixed << setprecision(1);
    cout << fee << endl;
    return 0;
}
