// luogu b2037

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    if (n % 2 == 0) {
        cout << "even" << endl;
    } else {
        cout << "odd" << endl;
    }
    return 0;
}
