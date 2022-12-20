// luogu p1008

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    const int min_first = 123;
    const int max_first = 987 / 3;
    int cnt[10] = {0};
    bool flag = true;
    for (int i = min_first; i <= max_first; ++i) {
        int number = i;
        while (number != 0) {
            cnt[number % 10]++;
            number /= 10;
        }
        number = i * 2;
        while (number != 0) {
            cnt[number % 10]++;
            number /= 10;
        }
        number = i * 3;
        while (number != 0) {
            cnt[number % 10]++;
            number /= 10;
        }
        for (int j = 1; j < 10; ++j) {
            if (cnt[j] != 1) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << i << " " << i * 2 << " " << i * 3 << endl;
        }
        for (int & j : cnt) {
            j = 0;
        }
        flag = true;
    }
    return 0;
}
