// luogu p4387
// WA

#include <iostream>
#include <stack>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int q{}, n{}, cnt{1};
    cin >> q;
    stack<int> s;
    while (q--) {
        cin >> n;
        int *in{new int[n + 1]}, *out{new int[n + 1]};
        for (int i{1}; i < n + 1; ++i) {
            cin >> in[i];
        }
        for (int i{1}; i < n + 1; ++i) {
            cin >> out[i];
        }
        for (int i{1}; i < n + 1; ++i) {
            s.push(in[i]);
            while (s.top() == out[cnt]) {
                s.pop();
                cnt++;
                if (s.empty()) {
                    break;
                }
            }
        }
        if (s.empty()) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
            while (!s.empty()) {
                s.pop();
            }
        }
    }
    return 0;
}
