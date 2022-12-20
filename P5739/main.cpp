// luogu p5739

#include <iostream>

using namespace std;

int fac(int x) {
    if (x == 1) {
        return 1;
    } else {
        return x * fac(x - 1);
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    cout << fac(n) << endl;
    return 0;
}
