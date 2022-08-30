// luogu p3717

#include <iostream>
#include <cstring>

using namespace std;

int a[101][101]{};

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, r{};
    cin >> n >> m >> r;
    memset(a, 0, sizeof(a));
    while (m--) {
        int x{}, y{};
        cin >> x >> y;
        for (int i{1}; i <= n; ++i) {
            for (int j{1}; j <= n; ++j) {
                if ((i - x) * (i - x) + (j - y) * (j - y) <= r * r) {
                    a[i][j] = 1;
                }
            }
        }
    }
    int cnt{};
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            if (a[i][j] == 1) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
