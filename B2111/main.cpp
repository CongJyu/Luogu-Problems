// luogu b2111

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double relative{};
    cin >> relative;
    string base1, base2;
    cin >> base1 >> base2;
    int total_length{(int) base1.length()}, same{};
    for (int i{}; i < total_length; ++i) {
        if (base1[i] == base2[i]) {
            same++;
        }
    }
    if (same * 1.0 / total_length - relative >= 0) {
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
