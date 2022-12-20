// luogu p5725

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cout << setw(2) << setfill('0') << cnt;
            cnt++;
        }
        cout << endl;
    }
    cnt = 1;
    cout << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout << "  ";
        }
        for (int j = 0; j < i + 1; ++j) {
            cout << setw(2) << setfill('0') << cnt;
            cnt++;
        }
        cout << endl;
    }
    cout << endl;
    return 0;
}
