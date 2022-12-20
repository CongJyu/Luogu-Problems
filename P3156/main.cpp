// luogu p3156

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    int *num{new int[n]};
    int *req{new int[m]};
    for (int i{}; i < n; ++i) {
        cin >> num[i];
    }
    for (int i{}; i < m; ++i) {
        cin >> req[i];
    }
    for (int i{}; i < m; ++i) {
        cout << num[req[i] - 1] << endl;
    }
    delete[] num;
    delete[] req;
    return 0;
}
