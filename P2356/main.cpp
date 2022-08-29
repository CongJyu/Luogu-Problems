// luogu p2356

#include <iostream>

using namespace std;

int n{};
int board[10001][10001]{};
int enemy{};
bool is_bad_game{true};

void kill_enemy(int row, int col) {
    if (board[row][col] != 0) {
        return;
    } else {
        is_bad_game = false;
    }
    int current_enemy{};
    for (int i{}; i < n; ++i) {
        if (i != row and board[i][col] != 0) {
            current_enemy += board[i][col];
        }
    }
    for (int i{}; i < n; ++i) {
        if (i != col and board[row][i] != 0) {
            current_enemy += board[row][i];
        }
    }
    if (current_enemy > enemy) {
        enemy = current_enemy;
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            cin >> board[i][j];
        }
    }
    for (int i{}; i < n; ++i) {
        for (int j{}; j < n; ++j) {
            kill_enemy(i, j);
        }
    }
    if (is_bad_game) {
        cout << "Bad Game!" << endl;
    } else {
        cout << enemy << endl;
    }
    return 0;
}
