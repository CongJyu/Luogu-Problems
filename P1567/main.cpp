// luogu p1567

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *t{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> t[i];
    }
    int tmp{1}, mt{};
    for (int i{1}; i < n; ++i) {
        if (t[i] > t[i - 1]) {
            tmp++;
            if (mt < tmp) {
                mt = tmp;
            }
        } else {
            tmp = 1;
        }
    }
    delete[] t;
    cout << mt << endl;
    return 0;
}
