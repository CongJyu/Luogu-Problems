// luogu p5728

#include <iostream>
#include <cmath>

using namespace std;

struct Student {
    int cn{};
    int mt{};
    int en{};
    int total{};
};

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *stu = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> stu[i].cn >> stu[i].mt >> stu[i].en;
        stu[i].total = stu[i].cn + stu[i].mt + stu[i].en;
    }
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if ((abs(stu[i].total - stu[j].total) <= 10) &&
                (abs(stu[i].cn - stu[j].cn) <= 5) && (abs(stu[i].mt - stu[j].mt) <= 5) &&
                (abs(stu[i].en - stu[j].en) <= 5)) {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
