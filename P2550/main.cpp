// luogu p2550

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int prize[7] = {0};
    int get_prize[7] = {0};
    for (int &i: prize) {
        cin >> i;
    }
    int buy[7] = {0};
    while (n--) {
        int cnt = 0;
        for (int &i: buy) {
            cin >> i;
        }
        for (int i: buy) {
            for (int j: prize) {
                if (i == j) {
                    cnt++;
                }
            }
        }
        get_prize[7 - cnt]++;
    }
    for (int i: get_prize) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
