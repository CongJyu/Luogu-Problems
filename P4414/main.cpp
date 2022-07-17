// luogu p4414

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a[3] = {0};
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    string order;
    cin >> order;
    for (int i = 0; i < 3; ++i) {
        switch (order[i]) {
            case 'A':
                cout << a[0] << " ";
                break;
            case 'B':
                cout << a[1] << " ";
                break;
            case 'C':
                cout << a[2] << " ";
                break;
        }
    }
    cout << endl;
    return 0;
}
