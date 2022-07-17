// luogu p5729

#include <iostream>

using namespace std;

int v[21][21][21] = {0};

int main() {
    ios::sync_with_stdio(false);
    int w = 0, x = 0, h = 0;
    cin >> w >> x >> h;
//    int ***v = new int **[w];
//    for (int i = 0; i < w; ++i) {
//        v[i] = new int *[x];
//        for (int j = 0; j < x; ++j) {
//            v[i][j] = new int[h];
//        }
//    }
    for (int i = 1; i <= w; ++i) {
        for (int j = 1; j <= x; ++j) {
            for (int k = 1; k <= h; ++k) {
                v[i][j][k] = 1;
            }
        }
    }
    int n = 0;
    cin >> n;
    while (n--) {
        int x1 = 0, y1 = 0, z1 = 0, x2 = 0, y2 = 0, z2 = 0;
        cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
        for (int i = x1; i <= x2; ++i) {
            for (int j = y1; j <= y2; ++j) {
                for (int k = z1; k <= z2; ++k) {
                    v[i][j][k] = 0;
                }
            }
        }
    }
    int cnt = 0;
    for (int i = 0; i <= w; ++i) {
        for (int j = 0; j <= x; ++j) {
            for (int k = 0; k <= h; ++k) {
                if (v[i][j][k] == 1) {
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
