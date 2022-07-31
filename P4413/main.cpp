// luogu p4413

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long r1{}, r2, s{};
    cin >> r1 >> s;
    r2 = 2 * s - r1;
    cout << r2 << endl;
    return 0;
}
