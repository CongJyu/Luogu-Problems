// luogu p1601
// WA

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string a, b;
    cin >> a >> b;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int len{(int) max(a.length(), b.length()) + 1};
    int *result{new int[len]};
    for (int i{}; i < len; ++i) {
        result[i] = (int) (a[i] - '0' + b[i] - '0');
        if (result[i] >= 10) {
            result[i] -= 10;
            result[i + 1]++;
        }
    }
    int cnt;
    for (cnt = len - 1; cnt > 0; --cnt) {
        if (result[cnt] != 0) {
            break;
        }
    }
    for (; cnt >= 0; --cnt) {
        cout << result[cnt];
    }
    cout << endl;
    delete[] result;
    return 0;
}
