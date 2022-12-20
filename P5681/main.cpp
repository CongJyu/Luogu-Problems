// luogu p5681

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long a{}, b{}, c{};
    cin >> a >> b >> c;
    long long alice{a * a}, bob{b * c};
    if (alice > bob) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
    return 0;
}
