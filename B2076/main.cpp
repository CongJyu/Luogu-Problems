// luogu b2076

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double h{};
    cin >> h;
    double count{};
    for (int i{}; i < 9; ++i) {
        count += h;
        h /= 2;
        count += h;
    }
    count += h;
    h /= 2;
    cout << count << endl << h << endl;
    return 0;
}
