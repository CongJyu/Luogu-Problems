// luogu p3742

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string x, y;
    cin >> x >> y;
    for (int i{}; i < n; ++i) {
        if (y[i] > x[i]) {
            cout << -1 << endl;
            return 0;
        }
    }
    cout << y << endl;
    return 0;
}
