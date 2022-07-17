// luogu p5737

#include <iostream>
#include <vector>

using namespace std;

bool is_run(int year) {
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        return true;
    } else {
        return false;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int x = 0, y = 0;
    cin >> x >> y;
    int cnt = 0;
    vector<int> r_year;
    for (int i = x; i <= y; ++i) {
        if (is_run(i)) {
            cnt++;
            r_year.push_back(i);
        }
    }
    cout << cnt << endl;
    for (int i: r_year) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}
