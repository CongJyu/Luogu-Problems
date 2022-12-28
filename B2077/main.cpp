// luogu b2077

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    while (n != 1) {
        if (n % 2 == 0) {
            cout << n << "/2=" << n / 2 << endl;
            n /= 2;
        } else {
            cout << n << "*3+1=" << n * 3 + 1 << endl;
            n = n * 3 + 1;
        }
    }
    cout << "End" << endl;
    return 0;
}
