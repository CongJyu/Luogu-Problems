// luogu b2099

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int mat[6][5];
    for (int i{}; i < 5; ++i) {
        for (int j{}; j < 5; ++j) {
            cin >> mat[i][j];
        }
    }
    int m{}, n{};
    cin >> m >> n;
    m--;
    n--;
    for (int i{}; i < 5; ++i) {
        mat[5][i] = mat[m][i];
    }
    for (int i{}; i < 5; ++i) {
        mat[m][i] = mat[n][i];
    }
    for (int i{}; i < 5; ++i) {
        mat[n][i] = mat[5][i];
    }
    for (int i{}; i < 5; ++i) {
        for (int j{}; j < 5; ++j) {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
