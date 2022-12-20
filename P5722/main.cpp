// luogu p5722

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    cout << sum << endl;
    return 0;
}
