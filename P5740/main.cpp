// luogu p5740

#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string name;
    int cn{};
    int mt{};
    int en{};
};

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *s = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i].name >> s[i].cn >> s[i].mt >> s[i].en;
    }
    int flag = 0;
    for (int i = 1; i < n; ++i) {
        if (s[i].cn + s[i].mt + s[i].en > s[flag].cn + s[flag].mt + s[flag].en) {
            flag = i;
        }
    }
    cout << s[flag].name << " " << s[flag].cn << " " << s[flag].mt << " " << s[flag].en << endl;
    return 0;
}
