// luogu p1964

#include <iostream>
#include <string>

using namespace std;

int m{}, n{};

struct Item {
    int a, b, c;
    string name;
};

Item thing[1001];

int main() {
    ios::sync_with_stdio(false);
    cin >> m >> n;
    m = 21 - m;  // 空格子
    for (int i{1}; i <= n; ++i) {
        cin >> thing[i].a >> thing[i].b >> thing[i].c >> thing[i].name;
    }
    return 0;
}
