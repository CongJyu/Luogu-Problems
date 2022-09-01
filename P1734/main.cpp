// luogu p1734

#include <iostream>

using namespace std;

int a[1001]{}, dp[1001]{};

int main() {
    ios::sync_with_stdio(false);
    int s{};
    cin >> s;
    for (int i{1}; i <= s; ++i) {
        for (int j{i * 2}; j <= s; j += i) {
            a[j] += i;
        }
    }
    for (int i{1}; i <= s; ++i) {
        for (int j{i}; j <= s; ++j) {
            dp[j] = max(dp[j], dp[j - i] + a[i]);
        }
    }
    cout << dp[s] << endl;
    return 0;
}
