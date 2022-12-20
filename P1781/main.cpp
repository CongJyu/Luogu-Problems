// luogu p1781

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct Competitor {
    string vote;
    int num{};
};

bool cmp(const Competitor &a, const Competitor &b) {
    if (a.vote.length() != b.vote.length()) {
        return a.vote.length() > b.vote.length();
    } else {
        return a.vote > b.vote;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int m = 0;
    cin >> m;
    auto *cp = new Competitor[m];
    for (int i = 0; i < m; ++i) {
        cin >> cp[i].vote;
        cp[i].num = i + 1;
    }
    sort(cp, cp + m, cmp);
    cout << cp[0].num << endl << cp[0].vote << endl;
    delete[] cp;
    return 0;
}
