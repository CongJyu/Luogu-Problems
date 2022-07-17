// luogu p1319

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int cnt = 0, tmp = 0;
    bool zero = true;
    while (cnt < n * n) {
        cin >> tmp;
        if (zero) {
            for (int i = 0; i < tmp; ++i) {
                cout << 0;
                cnt++;
                if (cnt % n == 0) {
                    cout << endl;
                }
            }
            zero = false;
        } else {
            for (int i = 0; i < tmp; ++i) {
                cout << 1;
                cnt++;
                if (cnt % n == 0) {
                    cout << endl;
                }
            }
            zero = true;
        }
    }
    cout << endl;
    return 0;
}
