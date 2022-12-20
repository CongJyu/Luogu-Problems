// luogu p2181

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long n = 0;
    cin >> n;
    unsigned long long result;
    if (n == 3) {
        result = 0;
    } else {
        result = n * (n - 1) / 2 * (n - 2) / 3 * (n - 3) / 4;
    }
    cout << result << endl;
    return 0;
}
