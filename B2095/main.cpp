// luogu b2095

#include <iostream>
#include <iomanip>
#include <algorithm>
#include <cmath>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    double *white_cells{new double[n]};
    for (int i{}; i < n; ++i) {
        cin >> white_cells[i];
    }
    sort(white_cells, white_cells + n);
    double ave{};
    for (int i{1}; i < n - 1; ++i) {
        ave += white_cells[i];
    }
    ave /= (n - 2);
    double delta{};
    for (int i{1}; i < n - 1; ++i) {
        if (delta < abs(white_cells[i] - ave)) {
            delta = abs(white_cells[i] - ave);
        }
    }
    cout << fixed << setprecision(2) << ave << " " << delta << endl;
    delete[] white_cells;
    return 0;
}
