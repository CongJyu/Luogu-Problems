// luogu p1141

#include <iostream>
#include <cstring>

using namespace std;

int n{}, m{};
int a[100001][100001]{};

void dfs(int row, int col) {
    // no idea
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    memset(a, -1, sizeof(a));
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            char c;
            cin >> c;
            if (c == '1') {
                a[i][j] = 1;
            } else {
                a[i][j] = 0;
            }
        }
    }
    while (m--) {
        int x{}, y{};
        cin >> x >> y;
        x--;
        y--;
        if (a[x][y] == 1) {
            dfs(x, y);
        }
    }
    return 0;
}
