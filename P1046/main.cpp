// luogu p1046

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int apple[10] = {0};
    int hand = 0;
    for (int &i: apple) {
        cin >> i;
    }
    cin >> hand;
    hand += 30;
    int cnt = 0;
    for (int i: apple) {
        if (i <= hand) {
            cnt++;
        }
    }
    cout << cnt << endl;
    return 0;
}
