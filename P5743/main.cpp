// luogu p5743

#include <iostream>

using namespace std;

int peach(int x) {
    x--;
    int peach_num = 1;
    while (x--) {
        peach_num = (peach_num + 1) * 2;
    }
    return peach_num;
}

int main() {
    ios::sync_with_stdio(false);
    int day = 0;
    cin >> day;
    cout << peach(day) << endl;
    return 0;
}
