// luogu p5720

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a = 0;
    cin >> a;
    int day = 1;
    while (a != 1) {
        a /= 2;
        day++;
    }
    cout << day << endl;
    return 0;
}
