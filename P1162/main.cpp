// luogu p1162

#include <iostream>
#include <cstring>

using namespace std;

int n{};
int board[31][31]{}, color[31][31]{};

struct Direction {
    int x;
    int y;
} dir[4]{
        {-1, 0},
        {1, 0},
        {0, -1},
        {0, 1}
};

void dfs(int row, int col) {
    if (row < 0 or row > n + 1 or col < 0 or col > n + 1) {
        return;
    }
    if (color[row][col] != 0) {
        return;
    }
    color[row][col] = 1;
    for (int i{}; i < 4; ++i) {
        dfs(row + dir[i].x, col + dir[i].y);
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    memset(board, 0, sizeof(board));
    memset(color, 0, sizeof(color));
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            cin >> board[i][j];
            color[i][j] = board[i][j];
        }
    }
    dfs(0, 0);
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            if (color[i][j] == 0) {
                cout << 2 << " ";
            } else {
                cout << board[i][j] << " ";
            }
        }
        cout << endl;
    }
    return 0;
}
