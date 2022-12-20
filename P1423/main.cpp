// luogu p1423

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double target = 0;
    cin >> target;
    double already = 0, len = 2;
    int step = 0;
    while (already < target) {
        already += len;
        step++;
        len *= 0.98;
    }
    cout << step << endl;
    return 0;
}
