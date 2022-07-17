// luogu p2676

#include <iostream>
#include <algorithm>

using namespace std;

bool cmp(int a, int b) {
    return a > b;
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0, b = 0;
    cin >> n >> b;
    int *h = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> h[i];
    }
    sort(h, h + n, cmp);
    int cnt = 0, s = 0;
    while (s < b) {
        s += h[cnt];
        cnt++;
    }
    cout << cnt << endl;
    return 0;
}
