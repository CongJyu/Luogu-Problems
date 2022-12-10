// luogu b2062

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, n{};
    cin >> a >> n;
    long long result{1};
    for (int i{}; i < n; ++i) {
        result *= a;
    }
    cout << result << endl;
    return 0;
}
