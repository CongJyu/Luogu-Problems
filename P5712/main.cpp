// luogu p5712

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int x = 0;
    cin >> x;
    if (x <= 1) {
        cout << "Today, I ate " << x << " apple." << endl;
    } else {
        cout << "Today, I ate " << x << " apples." << endl;
    }
    return 0;
}
