// luogu p5716

#include <iostream>

using namespace std;

int day[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main() {
    ios::sync_with_stdio(false);
    int year = 0, month = 0;
    cin >> year >> month;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        if (month == 2) {
            cout << 29 << endl;
        } else {
            cout << day[month - 1] << endl;
        }
    } else {
        cout << day[month - 1] << endl;
    }
    return 0;
}
