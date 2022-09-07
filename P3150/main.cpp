// luogu p3150

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n--) {
        int x{};
        cin >> x;
        if (x % 2 == 0) {
            cout << "pb wins" << endl;
        } else {
            cout << "zs wins" << endl;
        }
    }
    return 0;
}
