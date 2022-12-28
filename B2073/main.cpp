// luogu b2073

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{}, n{};
    cin >> a >> b >> n;
    for (int i{}; i < n; ++i) {
        a %= b;
        a *= 10;
    }
    cout << a / b << endl;
    return 0;
}
