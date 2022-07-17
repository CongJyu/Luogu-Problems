// luogu p1424

#include <iostream>

using namespace std;

int day[7] = {1, 1, 1, 1, 1, 0, 0};

int main() {
    ios::sync_with_stdio(false);
    int x = 0, n = 0;
    cin >> x >> n;
    int dis = 0;
    int count_day = 0, week = x - 1;
    while (count_day < n) {
        if (day[week] == 1) {
            dis += 250;
        }
        week++;
        if (week > 6) {
            week %= 7;
        }
        count_day++;
    }
    cout << dis << endl;
    return 0;
}
