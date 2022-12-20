// luogu p1789

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;
    int **g = new int *[n];
    for (int i = 0; i < n; ++i) {
        g[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            g[i][j] = 0;
        }
    }
    while (m--) {
        int x = 0, y = 0;
        cin >> x >> y;
        x--;
        y--;
        g[x][y]++;
        if (x - 1 >= 0) {
            g[x - 1][y]++;
        }
        if (x - 2 >= 0) {
            g[x - 2][y]++;
        }
        if (x + 1 < n) {
            g[x + 1][y]++;
        }
        if (x + 2 < n) {
            g[x + 2][y]++;
        }
        if (y - 1 >= 0) {
            g[x][y - 1]++;
        }
        if (y - 2 >= 0) {
            g[x][y - 2]++;
        }
        if (y + 1 < n) {
            g[x][y + 1]++;
        }
        if (y + 2 < n) {
            g[x][y + 2]++;
        }
        if (x - 1 >= 0 && y - 1 >= 0) {
            g[x - 1][y - 1]++;
        }
        if (x + 1 < n && y - 1 >= 0) {
            g[x + 1][y - 1]++;
        }
        if (x - 1 >= 0 && y + 1 < n) {
            g[x - 1][y + 1]++;
        }
        if (x + 1 < n && y + 1 < n) {
            g[x + 1][y + 1]++;
        }
    }
    while (k--) {
        int x = 0, y = 0;
        cin >> x >> y;
        x--;
        y--;
        int start_x, start_y, end_x, end_y;
        if (x - 2 < 0) {
            start_x = 0;
        } else {
            start_x = x - 2;
        }
        if (y - 2 < 0) {
            start_y = 0;
        } else {
            start_y = y - 2;
        }
        if (x + 2 >= n) {
            end_x = n - 1;
        } else {
            end_x = x + 2;
        }
        if (y + 2 >= n) {
            end_y = n - 1;
        } else {
            end_y = y + 2;
        }
        for (int i = start_x; i <= end_x; ++i) {
            for (int j = start_y; j <= end_y; ++j) {
                g[i][j]++;
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            if (g[i][j] == 0) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
