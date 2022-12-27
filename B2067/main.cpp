// luogu b2067

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int m{}, n{};
    cin >> m >> n;
    int counter{};
    while (n--) {
        int a{};
        cin >> a;
        if (a <= m) {
            m -= a;
        } else {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
