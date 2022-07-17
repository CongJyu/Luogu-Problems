// luogu p2615
// no idea

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int **magic = new int *[n];
    for (int i = 0; i < n; ++i) {
        magic[i] = new int[n];
    }
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            magic[i][j] = 0;
        }
    }
    magic[0][(n - 1) / 2] = 1;
    return 0;
}
