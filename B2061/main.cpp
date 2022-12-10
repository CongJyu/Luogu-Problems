// luogu b2061

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int count_1{}, count_5{}, count_10{};
    for (int i{}; i < n; ++i) {
        int temp{};
        cin >> temp;
        if (temp == 1) {
            count_1++;
        } else if (temp == 5) {
            count_5++;
        } else if (temp == 10) {
            count_10++;
        }
    }
    cout << count_1 << endl;
    cout << count_5 << endl;
    cout << count_10 << endl;
    return 0;
}
