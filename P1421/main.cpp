// luogu p1421

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a = 0, b = 0;
    cin >> a >> b;
    int own = a * 10 + b;
    int num = own / 19;
    cout << num << endl;
    return 0;
}
