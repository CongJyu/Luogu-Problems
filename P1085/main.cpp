// luogu p1085

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int school = 0, home = 0;
    int total[7] = {0};
    for (int &i: total) {
        cin >> school >> home;
        i = school + home;
    }
    bool happy = true;
    for (int i: total) {
        if (i > 8) {
            happy = false;
        }
    }
    int flag = 0, max_time = 0;
    for (int i = 0; i < 7; ++i) {
        if (total[i] > max_time) {
            max_time = total[i];
            flag = i;
        }
    }
    if (happy) {
        cout << 0 << endl;
    } else {
        cout << flag + 1 << endl;
    }
    return 0;
}
