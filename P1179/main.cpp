// luogu p1179

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int l{}, r{};
    cin >> l >> r;
    int cnt{};
    for (int i{l}; i <= r; ++i) {
        string s = to_string(i);
        for (int j{}; j < (int) s.length(); ++j) {
            if (s[j] == '2') {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
