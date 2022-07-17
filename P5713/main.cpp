// luogu p5713

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int local, luogu;
    int n = 0;
    cin >> n;
    luogu = 11 + n * 3;
    local = n * 5;
    if (local < luogu) {
        cout << "Local" << endl;
    } else {
        cout << "Luogu" << endl;
    }
    return 0;
}
