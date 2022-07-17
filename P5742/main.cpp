// luogu p5742

#include <iostream>

using namespace std;

struct Student {
    int number;
    double academic;
    double addition;
};

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    auto *s = new Student[n];
    for (int i = 0; i < n; ++i) {
        cin >> s[i].number >> s[i].academic >> s[i].addition;
        if (s[i].academic + s[i].addition > 140 && s[i].academic * 0.7 + s[i].addition * 0.3 >= 80) {
            cout << "Excellent" << endl;
        } else {
            cout << "Not excellent" << endl;
        }
    }
    delete[] s;
    return 0;
}
