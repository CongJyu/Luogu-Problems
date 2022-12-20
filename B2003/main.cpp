// luogu b2003

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long a[3]{};
    for (long long i{}; i < 3; ++i) {
        cin >> a[i];
    }
    cout << a[1] << endl;
    return 0;
}
