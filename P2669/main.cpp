// luogu p2669

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int k = 0;
    cin >> k;
    int total_days = 0, cycle = 1;
    int coin = 0;
    while (total_days != k) {
        for (int i = 0; i < cycle; ++i) {
            coin += cycle;
            total_days++;
            if (total_days >= k) {
                break;
            }
        }
        cycle++;
    }
    cout << coin << endl;
    return 0;
}
