// luogu p5717

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3] = {0};
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    if (a[0] + a[1] <= a[2]) {
        cout << "Not triangle" << endl;
    } else {
        if (a[0] * a[0] + a[1] * a[1] == a[2] * a[2]) {
            cout << "Right triangle" << endl;
        }
        if (a[0] * a[0] + a[1] * a[1] > a[2] * a[2]) {
            cout << "Acute triangle" << endl;
        }
        if (a[0] * a[0] + a[1] * a[1] < a[2] * a[2]) {
            cout << "Obtuse triangle" << endl;
        }
        if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) {
            cout << "Isosceles triangle" << endl;
        }
        if (a[0] == a[1] && a[1] == a[2] && a[0] == a[2]) {
            cout << "Equilateral triangle" << endl;
        }
    }
    return 0;
}
