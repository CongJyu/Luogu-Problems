// luogu p1152

#include <iostream>
#include <cmath>

using namespace std;

int step[100000000]{0};

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    long long *a{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    for (int i{1}; i < n; ++i) {
        step[abs(a[i - 1] - a[i])]++;
    }
    bool flag{true};
    for (int i{1}; i <= n - 1; ++i) {
        if (step[i] == 0) {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "Jolly" << endl;
    } else {
        cout << "Not jolly" << endl;
    }
    delete[] a;
    return 0;
}
