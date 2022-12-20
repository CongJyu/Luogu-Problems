// luogu b2035

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    long long n{};
    cin >> n;
    if (n > 0) {
        cout << "positive" << endl;
    } else if (n == 0) {
        cout << "zero" << endl;
    } else {
        cout << "negative" << endl;
    }
    return 0;
}
