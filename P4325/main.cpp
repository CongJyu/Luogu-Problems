// luogu p4325

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    vector<int> l;
    for (int i{}; i < 10; ++i) {
        int tmp{};
        cin >> tmp;
        tmp %= 42;
        if (l.empty()) {
            l.push_back(tmp);
        } else {
            bool found{false};
            for (int j{}; j < (int) l.size(); ++j) {
                if (l.at(j) == tmp) {
                    found = true;
                    break;
                }
            }
            if (!found) {
                l.push_back(tmp);
            }
        }
    }
    cout << l.size() << endl;
    return 0;
}
