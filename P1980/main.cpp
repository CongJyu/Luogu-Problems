// luogu p1980

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, x = 0;
    cin >> n >> x;
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        string in = to_string(i);
        for (char j: in) {
            if (j == (char) ('0' + x)) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
