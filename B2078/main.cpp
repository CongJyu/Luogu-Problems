// luogu b2078

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string m{};
    cin >> m;
    int k{}, counter{};
    cin >> k;
    for (int i{}; i < (int) m.length(); ++i) {
        if (m[i] == '3') {
            counter++;
        }
    }
    if (counter == k) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    return 0;
}
