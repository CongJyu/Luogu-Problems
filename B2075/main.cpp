// luogu b2075

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    cin >> a >> b;
    int result{1};
    for (int i{}; i < b; ++i) {
        result *= a;
        result %= 1000;
    }
    if (result <= 9) {
        cout << "00" << result << endl;
    } else if (result <= 99) {
        cout << "0" << result << endl;
    } else {
        cout << result << endl;
    }
    return 0;
}
