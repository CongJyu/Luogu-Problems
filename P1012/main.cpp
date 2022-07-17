// luogu p1012

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool cmp(const string &a, const string &b) {
    return (a + b) > (b + a);
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    string *s{new string[n]};
    for (int i{}; i < n; ++i) {
        cin >> s[i];
    }
    sort(s, s + n, cmp);
    string out{};
    for (int i{}; i < n; ++i) {
        out += s[i];
    }
    cout << out << endl;
    delete[] s;
    return 0;
}
