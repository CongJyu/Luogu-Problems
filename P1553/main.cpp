// luogu p1553

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    unsigned long long before = 0;
    cin >> before;
    string before_rev = to_string(before);
    reverse(before_rev.begin(), before_rev.end());
    cout << stoull(before_rev);
    char opt;
    if (cin >> opt) {
        if (opt == '%') {
            cout << opt << endl;
        } else if (opt == '/' || opt == '.') {
            unsigned long long after = 0;
            cin >> after;
            string after_rev = to_string(after);
            reverse(after_rev.begin(), after_rev.end());
            cout << opt << stoull(after_rev);
        }
    }
    cout << endl;
    return 0;
}
