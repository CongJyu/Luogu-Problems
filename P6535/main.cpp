// luogu p6535

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int c[26]{0};
    while (n--) {
        string in;
        cin >> in;
        c[in[0] - 'a']++;
    }
    bool ok{false};
    for (int i{}; i < 26; ++i) {
        if (c[i] >= 5) {
            cout << (char) (i + 'a');
            ok = true;
        }
    }
    if (ok) {
        cout << endl;
    } else {
        cout << "PREDAJA" << endl;
    }
    return 0;
}
