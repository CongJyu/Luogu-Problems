// luogu b2029

#include <iostream>
#include <cmath>

using namespace std;

const double Total = 20000;
const double Pi = 3.14;

int main() {
    ios::sync_with_stdio(false);
    int h{}, r{};
    cin >> h >> r;
    double v{Pi * r * r * h};
    int bucket;
    if (fmod(Total, v) == 0) {
        bucket = (int) (Total / v);
    } else {
        bucket = (int) (Total / v) + 1;
    }
    cout << bucket << endl;
    return 0;
}
