// luogu p5711

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    if ((n % 4 == 0 && n % 100 != 0) || (n % 400 == 0)) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
