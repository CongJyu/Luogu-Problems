// luogu b2098

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> out;
    for (int i{}; i < n; ++i) {
        if (out.empty()) {
            out.push_back(a[i]);
        } else {
            bool found{false};
            for (int j{}; j < (int) out.size(); ++j) {
                if (out.at(j) == a[i]) {
                    found = true;
                    break;
                }
            }
            if (found) {
                continue;
            } else {
                out.push_back(a[i]);
            }
        }
    }
    for (int i{}; i < (int) out.size(); ++i) {
        cout << out.at(i) << " ";
    }
    cout << endl;
    delete[] a;
    return 0;
}
