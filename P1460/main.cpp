// luogu p1460

#include <iostream>

using namespace std;

int n{}, m{}, min_n{(int) 1e8};
int a[1000]{}, b[1000][1000]{}, c[1000]{};

int result[10000]{};

bool judge(int x) {
    for (int i{1}; i <= n; ++i) {
        int sum{};
        for (int j{1}; j <= x; ++j) {
            sum += b[c[j]][i];
        }
        if (sum < a[i]) {
            return false;
        }
    }
    return true;
}

void search(int t, int s) {
    if (m < t) {
        if (judge(s) and s < min_n) {
            min_n = s;
            for (int i{1}; i <= min_n; ++i) {
                result[i] = c[i];
            }
        }
        return;
    }
    c[s + 1] = t;
    search(t + 1, s + 1);
    c[s + 1] = 0;
    search(t + 1, s);
}

int main() {
    ios::sync_with_stdio(false);
    cin >> n;
    for (int i{1}; i <= n; ++i) {
        cin >> a[i];
    }
    cin >> m;
    for (int i{1}; i <= m; ++i) {
        for (int j{1}; j <= n; ++j) {
            cin >> b[i][j];
        }
    }
    search(0, 0);
    cout << min_n << " ";
    for (int i{1}; i <= min_n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
