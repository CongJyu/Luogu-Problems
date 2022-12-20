// luogu p5715

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3] = {0};
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << a[0] << " " << a[1] << " " << a[2] << endl;
    return 0;
}
