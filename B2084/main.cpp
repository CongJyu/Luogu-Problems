// luogu b2084

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{};
    cin >> n;
    int x{2};
    while (true) {
        if (n % x == 0) {
            break;
        } else {
            x++;
        }
    }
    cout << n / x << endl;
    return 0;
}
