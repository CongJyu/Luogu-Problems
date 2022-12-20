// luogu b2040

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long input{};
    cin >> input;
    if (input >= 10 and input <= 99) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
