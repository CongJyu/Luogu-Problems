// luogu b2097

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *a{new int[n]};
    for (int i{}; i < n; ++i) {
        cin >> a[i];
    }
    int platform{}, temp{1};
    for (int i{1}; i < n; ++i) {
        if (a[i] == a[i - 1]) {
            temp++;
        } else {
            if (platform < temp) {
                platform = temp;
            }
            temp = 1;
        }
    }
    if (platform < temp) {
        platform = temp;
    }
    cout << platform << endl;
    return 0;
}
