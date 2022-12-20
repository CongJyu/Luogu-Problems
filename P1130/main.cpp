// luogu p1130

#include <iostream>
#include <climits>

using namespace std;

int n{}, m{};
int step[2001][2001]{}, dp[2001][2001]{};

int main() {
    ios::sync_with_stdio(false);
    cin >> n >> m;
    for (int i{1}; i <= m; ++i) {
        for (int j{1}; j <= n; ++j) {
            cin >> step[i][j];
        }
    }
    for (int i{1}; i <= m; ++i) {
        dp[i][0] = step[i][0];
    }
    for (int i{1}; i <= m; ++i) {
        for (int j{1}; j <= n; ++j) {
            if (i == 1) {
                dp[i][j] = dp[i][j - 1] + step[i][j];
            } else {
                dp[i][j] = min(dp[i - 1][j - 1], dp[i][j - 1]) + step[i][j];
            }
        }
    }
    for (int j{1}; j <= m; ++j) {
        dp[1][j] = min(dp[m][j - 1], dp[1][j - 1]) + step[1][j];
    }
    // =======TEST=======
    for (int i{1}; i <= m; ++i) {
        for (int j{1}; j <= n; ++j) {
            clog << dp[i][j] << " ";
        }
        clog << endl;
    }
    // =======TEST=======
    int least_day{INT_MAX};
    for (int i{1}; i <= m; ++i) {
        if (dp[i][n] < least_day) {
            least_day = dp[i][n];
        }
    }
    cout << least_day << endl;
    return 0;
}
