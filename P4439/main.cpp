// p4439

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    char *p{new char[n]};
    for (int i{}; i < n; ++i) {
        cin >> p[i];
    }
    int cnt{2};
    for (int i{1}; i < n; ++i) {
        if (p[i] != p[i - 1]) {
            cnt++;
        }
    }
    cout << cnt << endl;
    delete[] p;
    return 0;
}
