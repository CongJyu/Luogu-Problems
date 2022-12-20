// luogu p1909

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int num[3] = {0}, price[3] = {0};
    int total[3] = {0};
    for (int i = 0; i < 3; ++i) {
        cin >> num[i] >> price[i];
    }
    for (int i = 0; i < 3; ++i) {
        if (n % num[i] == 0) {
            total[i] = n / num[i] * price[i];
        } else {
            total[i] = (n / num[i] + 1) * price[i];
        }
    }
    sort(total, total + 3);
    cout << total[0] << endl;
    return 0;
}
