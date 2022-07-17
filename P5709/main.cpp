// luogu p5709

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m = 0, t = 0, s = 0;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << 0 << endl;
        return 0;
    }
    int left;
    if (s % t == 0) {
        left = m - s / t;
    } else {
        left = m - s / t - 1;
    }
    if (left < 0) {
        left = 0;
    }
    cout << left << endl;
    return 0;
}
