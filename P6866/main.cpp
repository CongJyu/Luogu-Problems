// luogu p6866

#include <iostream>
#include <cstring>

using namespace std;

int n{}, m{};
char a[101][101]{'.'};

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    memset(a, '.', sizeof(a));
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    int cnt{};
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            if (a[i][j] == '*' and a[i - 1][j] == '.' and a[i][j - 1] == '.') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
