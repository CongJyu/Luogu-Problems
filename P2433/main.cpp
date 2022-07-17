// luogu p2433

#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int T = 0;
    cin >> T;
    if (T == 1) {
        cout << "I love Luogu!" << endl;
    } else if (T == 2) {
        cout << 2 + 4 << " " << 10 - 2 - 4 << endl;
    } else if (T == 3) {
        cout << 14 / 4 << endl;
        cout << 14 / 4 * 4 << endl;
        cout << 14 - 14 / 4 * 4 << endl;
    } else if (T == 4) {
        cout << 166.666666 << endl;
    } else if (T == 5) {
        cout << 15 << endl;
    } else if (T == 6) {
        cout << sqrt(6 * 6 + 9 * 9) << endl;
    } else if (T == 7) {
        cout << 100 + 10 << endl;
        cout << 110 - 20 << endl;
        cout << 0 << endl;
    } else if (T == 8) {
        // 请自行完成问题 8 的代码
        cout << 2 * 3.141593 * 5 << endl;
        cout << 3.141593 * 5 * 5 << endl;
        cout << 4.0 / 3.0 * 3.141593 * 5 * 5 * 5 << endl;
    } else if (T == 9) {
        cout << 22 << endl;
    } else if (T == 10) {
        // 请自行完成问题 10 的代码
        int n1 = 8, t1 = 30, n2 = 10, t2 = 6;
        int t3 = 10;
        double inc_rate = (1.0 * n1 * t1 - n2 * t2) / (t1 - t2);
        double init_num = n2 * t2 - inc_rate * t2;
        double ans = (init_num + t3 * inc_rate) / t3;
        cout << ans << endl;
    } else if (T == 11) {
        // 请自行完成问题 11 的代码
        cout << 100.0 / (8.0 - 5.0) << endl;
    } else if (T == 12) {
        // 请自行完成问题 12 的代码
        cout << (int) ('M' - 'A' + 1) << endl;
        cout << (char) ('A' + 17) << endl;
    } else if (T == 13) {
        // 请自行完成问题 13 的代码
        double v = 4.0 / 3.0 * 3.141593 * (4 * 4 * 4 + 10 * 10 * 10);
        double a = floor(pow(v, 1.0 / 3.0));
        cout << a << endl;
    } else if (T == 14) {
        // 请自行完成问题 14 的代码
        cout << 50 << endl;
    }
    return 0;
}
