// luogu p1331

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int n{}, m{};
int sea[1001][1001]{};
int idx[1001][1001]{};

struct Direction {
    int x, y;
} dir[4]{
        {-1, 0},
        {1,  0},
        {0,  -1},
        {0,  1}
};

bool ship_get_together{false};

void dfs(int row, int col, int id) {
    if (row < 0 or row > n or col < 0 or col > m) {
        return;
    }
    if (sea[row][col] == 0 and (
            (sea[row + dir[0].x][col + dir[0].y] == 1 and sea[row + dir[2].x][col + dir[2].y] == 1) or
            (sea[row + dir[1].x][col + dir[1].y] == 1 and sea[row + dir[2].x][col + dir[2].y] == 1) or
            (sea[row + dir[0].x][col + dir[0].y] == 1 and sea[row + dir[3].x][col + dir[3].y] == 1) or
            (sea[row + dir[1].x][col + dir[1].y] == 1 and sea[row + dir[3].x][col + dir[3].y] == 1)
    )) {
        ship_get_together = true;
        return;
    }
    if (idx[row][col] > 0 or sea[row][col] == 0) {
        return;
    }

    idx[row][col] = id;
    for (int i{}; i < 4; ++i) {
        dfs(row + dir[i].x, col + dir[i].y, id);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    memset(sea, 0, sizeof(sea));
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            char c;
            cin >> c;
            if (c == '#') {
                sea[i][j] = 1;
            } else {
                sea[i][j] = 0;
            }
        }
    }
    // test
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            clog << sea[i][j];
        }
        clog << endl;
    }
    // test
    int cnt{};
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            if (ship_get_together) {
                cout << "Bad placement." << endl;
                return 0;
            }
            if (idx[i][j] == 0 and sea[i][j] == 1) {
                dfs(i, j, ++cnt);
            }
        }
    }
    cout << "There are " << cnt << " ships." << endl;
    return 0;
}
