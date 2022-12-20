// luogu p1255
// some WA

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    unsigned long long before{1}, after{1};
    unsigned long long tmp;
    for (int i{}; i < n - 1; ++i) {
        tmp = before + after;
        before = after;
        after = tmp;
    }
    cout << after << endl;
    return 0;
}
