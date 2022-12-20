// luogu p1047

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int l = 0, m = 0;
    cin >> l >> m;
    int *tree = new int[l + 1];
    for (int i = 0; i < l + 1; ++i) {
        tree[i] = 1;
    }
    while (m--) {
        int start = 0, end = 0;
        cin >> start >> end;
        for (int i = start; i <= end; ++i) {
            tree[i] = 0;
        }
    }
    int cnt = 0;
    for (int i = 0; i < l + 1; ++i) {
        if (tree[i] == 1) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
