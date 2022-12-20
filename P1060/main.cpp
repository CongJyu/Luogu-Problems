// luogu p1060

#include <iostream>

using namespace std;

long long n{}, m{};
int v[10001]{}, p[10001]{};
int dp[10001]{};

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i{1}; i <= m; ++i) {
        cin >> v[i] >> p[i];
    }
    // not complete
    return 0;
}
