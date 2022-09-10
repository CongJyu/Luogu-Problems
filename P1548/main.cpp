// luogu p1548

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int square{}, rectangle{((m + 1) * (n + 1) * m * n) / 4};
    for (; m >= 1 and n >= 1; m--, n--) {
        square += m * n;
    }
    cout << square << " " << rectangle - square << endl;
    return 0;
}
