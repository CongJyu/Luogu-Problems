// luogu p1150

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{}, k{};
    cin >> n >> k;
    int total{n + (n - 1) / (k - 1)};
    cout << total << endl;
    return 0;
}
