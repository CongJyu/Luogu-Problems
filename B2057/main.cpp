// luogu b2057

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int score{};
    for (int i{}; i < n; ++i) {
        int temp{};
        cin >> temp;
        if (temp > score) {
            score = temp;
        }
    }
    cout << score << endl;
    return 0;
}
