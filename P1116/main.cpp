// luogu p1116

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *cabin = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> cabin[i];
    }
    int step{};
    for (int j = 0; j < n; ++j) {
        for (int i = 1; i < n; ++i) {
            if (cabin[i - 1] > cabin[i]) {
                step++;
                swap(cabin[i - 1], cabin[i]);
            }
        }
    }
    cout << step << endl;
    delete[] cabin;
    return 0;
}
