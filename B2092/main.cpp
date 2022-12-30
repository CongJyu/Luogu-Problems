// luogu b2092

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    bool *light{new bool[n + 1]};
    for (int i{}; i <= n; ++i) {
        light[i] = true;
    }
    for (int i{1}; i <= n; ++i) {
        for (int j{1}; j <= n; ++j) {
            if (j % i == 0) {
                light[j] = !light[j];
            }
        }
    }
    for (int i{1}; i <= n; ++i) {
        if (!light[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    return 0;
}
