// luogu p5534

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long a1{}, a2{}, m{};
    cin >> a1 >> a2 >> m;
    long long step{a2 - a1};
    long long end_item{a1 + step * (m - 1)};
    long long result{(a1 + end_item) * m / 2};
    cout << result << endl;
    return 0;
}
