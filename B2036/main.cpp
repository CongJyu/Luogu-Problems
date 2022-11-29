// luogu b2036

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s{};
    cin >> s;
    if (s[0] == '-') {
        for (int i{1}; i < (int) s.length(); ++i) {
            cout << s[i];
        }
        cout << endl;
    } else {
        cout << s << endl;
    }
    return 0;
}
