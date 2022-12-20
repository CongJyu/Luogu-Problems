// luogu p4956

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    for (int x = 100; x > 0; --x) {
        int k = 1;
        while ((7 * x + 21 * k) * 52 < n) {
            k++;
        }
        if ((7 * x + 21 * k) * 52 == n) {
            cout << x << endl;
            cout << k << endl;
            break;
        }
    }
    return 0;
}
