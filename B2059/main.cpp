// luogu b2059

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    int sum{};
    for (int i{m}; i <= n; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}
