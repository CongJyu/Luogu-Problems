// luogu p5710

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    bool dm1 = false, dm2 = false;
    if (n % 2 == 0) {
        dm1 = true;
    }
    if (n > 4 && n <= 12) {
        dm2 = true;
    }
    if (dm1 && dm2) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if (dm1 || dm2) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if ((dm1 && !dm2) || (!dm1 && dm2)) {
        cout << 1 << " ";
    } else {
        cout << 0 << " ";
    }
    if (!dm1 && !dm2) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
