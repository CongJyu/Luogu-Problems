// luogu p5706

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    double t = 0;  // 快乐水数量
    int n = 0;  // 同学数量
    cin >> t >> n;
    double div = t / n;
    int cup = n * 2;
    cout << fixed << setprecision(3) << div << endl;
    cout << cup << endl;
    return 0;
}
