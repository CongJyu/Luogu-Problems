// luogu p1104

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int y{};
    int m{};
    int d{};
    int order{};
};

bool cmp(const Student &a, const Student &b) {
    if (a.y != b.y) {
        return a.y < b.y;
    } else if (a.m != b.m) {
        return a.m < b.m;
    } else if (a.d != b.d) {
        return a.d < b.d;
    } else {
        return a.order > b.order;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    auto *s{new Student[n]};
    for (int i{}; i < n; ++i) {
        cin >> s[i].name >> s[i].y >> s[i].m >> s[i].d;
        s[i].order = i;
    }
    sort(s, s + n, cmp);
    for (int i{}; i < n; ++i) {
        cout << s[i].name << endl;
    }
    delete[] s;
    return 0;
}
