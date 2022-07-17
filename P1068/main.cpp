// luogu p1068

#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

struct Competitor {
    int k{};
    int s{};
};

bool cmp(Competitor a, Competitor b) {
    if (a.s != b.s) {
        return a.s > b.s;
    } else {
        return a.k < b.k;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{};
    cin >> n >> m;
    auto *cp{new Competitor[n]};
    for (int i{}; i < n; ++i) {
        cin >> cp[i].k >> cp[i].s;
    }
    sort(cp, cp + n, cmp);
    int line{(int) floor(m * 1.5) - 1};
    int out{line};
    for (int i{line}; i < n; ++i) {
        if (cp[i].s == cp[line].s) {
            out++;
        }
    }
    cout << cp[line].s << " " << out << endl;
    for (int i{}; i < out; ++i) {
        cout << cp[i].k << " " << cp[i].s << endl;
    }
    delete[] cp;
    return 0;
}
