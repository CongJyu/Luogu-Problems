// luogu p1320

#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int cnt_1 = 0, cnt_0 = 0;
    string line;
    cin >> line;
    vector<int> out;
    int n = (int) line.length();
    for (int i = 0; i < n - 1; ++i) {
        string tmp;
        cin >> tmp;
        line += tmp;
    }
    cout << n;
    if (line[0] == '1') {
        cout << " " << 0;
    }
    for (int i = 0; i < n * n; ++i) {
        if (line[i] == '1') {
            cnt_1++;
            if (line[i + 1] != '1') {
                cout << " " << cnt_1;
                cnt_1 = 0;
            }
        } else {
            cnt_0++;
            if (line[i + 1] != '0') {
                cout << " " << cnt_0;
                cnt_0 = 0;
            }
        }
    }
    return 0;
}
