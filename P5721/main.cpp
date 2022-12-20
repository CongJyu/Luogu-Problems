// luogu p5721

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int out = 1;
    for (int i = n; i > 0; --i) {
        for (int j = 1; j <= i; ++j) {
            cout << setw(2) << setfill('0') << out;
            out++;
        }
        cout << endl;
    }
    return 0;
}
