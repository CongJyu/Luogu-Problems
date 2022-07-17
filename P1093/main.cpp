// luogu p1093

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    int number{};
    int cn{};
    int mt{};
    int en{};
    int total{};
};

bool cmp(Student a, Student b) {
    if (a.total != b.total) {
        return a.total > b.total;
    } else {
        if (a.cn != b.cn) {
            return a.cn > b.cn;
        } else {
            return a.number < b.number;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *s = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i].cn >> s[i].mt >> s[i].en;
        s[i].number = i + 1;
        s[i].total = s[i].cn + s[i].mt + s[i].en;
    }
    sort(s, s + n, cmp);
    for (int i = 0; i < 5; ++i) {
        cout << s[i].number << " " << s[i].total << endl;
    }
    return 0;
}
