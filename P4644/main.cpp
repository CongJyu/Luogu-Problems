// luogu p4644

#include <iostream>

using namespace std;

struct Cow {
    int t1{};
    int t2{};
    int s{};
};

int main() {
    ios::sync_with_stdio(false);
    int n{}, m{}, e{};
    cin >> n >> m >> e;
    Cow *c{new Cow[n]};
    for (int i{}; i < n; ++i) {
        cin >> c[i].t1 >> c[i].t2 >> c[i].s;
    }
    delete[] c;
    return 0;
}
