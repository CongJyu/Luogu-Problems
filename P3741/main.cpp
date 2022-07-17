// luogu p3741

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1) {
        cout << 0 << endl;
        return 0;
    }
    int cnt = 0;
    for (int i = 1; i < (int) s.length(); ++i) {
        if (s[i - 1] == 'V' && s[i] == 'K') {
            s[i - 1] = '0';
            s[i] = '0';
            cnt++;
        }
    }
    for (int i = 1; i < (int) s.length(); ++i) {
        if ((s[i - 1] == 'V' && s[i] == 'V') || (s[i - 1] == 'K' && s[i] == 'K')) {
            cnt++;
            break;
        }
    }
    cout << cnt << endl;
    return 0;
}
