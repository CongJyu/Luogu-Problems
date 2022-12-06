// luogu b2041

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int lucky{}, encourage{};
    cin >> lucky >> encourage;
    if (lucky >= 10 or encourage >= 20) {
        cout << 1 << endl;
    } else {
        cout << 0 << endl;
    }
    return 0;
}
