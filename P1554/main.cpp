// luogu p1554

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int cnt[10] = {0};
    int m = 0, n = 0;
    cin >> m >> n;
    for (int i = m; i <= n; ++i) {
        string test = to_string(i);
        for (char j: test) {
            cnt[j - '0']++;
        }
    }
    cout << cnt[0];
    for (int i = 1; i < 10; ++i) {
        cout << " " << cnt[i];
    }
    cout << endl;
    return 0;
}
