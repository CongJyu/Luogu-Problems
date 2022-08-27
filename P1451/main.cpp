// luogu p1451

#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int n{}, m{};
int idx[101][101]{0};
int board[101][101];

struct Direction {
    int x, y;
} dir[4]{
        {-1, 0},
        {1,  0},
        {0,  -1},
        {0,  1}
};

void dfs(int row, int col, int id) {
    if (row < 0 or row > n or col < 0 or col > m) {
        return;
    }
    if (idx[row][col] > 0 or board[row][col] == 0) {
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
    memset(board, 0, sizeof(board));
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            char c;
            cin >> c;
            board[i][j] = c - '0';
            if (board[i][j] != 0) {
                board[i][j] = 1;
            }
        }
    }
    // test
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            clog << board[i][j];
        }
        clog << endl;
    }
    int cnt{};
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            if (idx[i][j] == 0 and board[i][j] == 1) {
                dfs(i, j, ++cnt);
            }
        }
    }
    cout << cnt << endl;
    // test
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= m; ++j) {
            clog << idx[i][j];
        }
        clog << endl;
    }
    return 0;
}
