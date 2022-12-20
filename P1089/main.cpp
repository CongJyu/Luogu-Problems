// luogu p1089

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int month[12] = {0};
    for (int &i: month) {
        cin >> i;
    }
    double bank = 0, hand = 0;
    for (int i = 0; i < 12; ++i) {
        hand += 300;
        hand -= month[i];
        if (hand >= 100) {
            int t = (int) hand / 100;
            hand -= t * 100;
            bank += t * 100;
        }
        if (hand < 0) {
            cout << "-" << i + 1 << endl;
            return 0;
        }
    }
    hand += bank * 1.2;
    cout << hand << endl;
    return 0;
}
