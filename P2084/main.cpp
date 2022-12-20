// luogu p2084

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{};
    string n;
    cin >> m >> n;
    int len{(int) n.length() - 1};
    bool ok{false};
    for (int i{}; i < (int) n.length(); ++i) {
        if (n[i] != '0') {
            if (i != 0) {
                cout << "+";
            }
            ok = true;
            cout << n[i] << "*" << m << "^" << len;
        }
        len--;
    }
    if (!ok) {
        cout << 0 << endl;
    }
    cout << endl;
    return 0;
}
