// luogu p5707

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int s = 0, v = 0;
    cin >> s >> v;
    int time = 10;
    if (s % v == 0) {
        time += s / v;
    } else {
        time += s / v + 1;
    }
    int time_hour = 8 - time / 60;
    int time_minute = 0 - time % 60;
    if (time_hour < 0) {
        time_hour += 24;
    }
    if (time_minute < 0) {
        time_hour -= 1;
        time_minute += 60;
    }
    cout << setw(2) << setfill('0') << time_hour;
    cout << ":";
    cout << setw(2) << setfill('0') << time_minute << endl;
    return 0;
}
