// luogu p2006

#include <iostream>
#include <vector>

using namespace std;

struct Skill {
    int a;
    int b;
    int number;
};

int main() {
    ios::sync_with_stdio(false);
    int k{}, m{}, n{};
    cin >> k >> m >> n;
    Skill *skill{new Skill[m]};
    for (int i{}; i < m; ++i) {
        cin >> skill[i].a >> skill[i].b;
        skill[i].number = i + 1;
    }
    vector<int> s;
    
    return 0;
}
