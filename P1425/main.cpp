// luogu p1425

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a = 0, b = 0, c = 0, d = 0;
    cin >> a >> b >> c >> d;
    int time_hour = c - a;
    int time_minute = d - b;
    if (time_minute < 0) {
        time_hour--;
        time_minute += 60;
    }
    cout << time_hour << " " << time_minute << endl;
    return 0;
}
