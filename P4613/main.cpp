// luogu p4613

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    long long *stick{new long long[n]}, *box{new long long[n]};
    for (int i{}; i < n; ++i) {
        cin >> stick[i];
    }
    for (int i{}; i < n; ++i) {
        cin >> box[i];
    }
    sort(stick, stick + n);
    sort(box, box + n);
    bool ok{true};
    for (int i{}; i < n; ++i) {
        if (stick[i] > box[i]) {
            ok = false;
            break;
        }
    }
    if (ok) {
        cout << "DA" << endl;
    } else {
        cout << "NE" << endl;
    }
    return 0;
}
