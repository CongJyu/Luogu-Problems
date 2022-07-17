// luogu p5719

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n = 0, k = 0;
    cin >> n >> k;
    double first_n = 0, second_n = 0;
    int first_c = 0, second_c = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % k == 0) {
            first_n += i;
            first_c++;
        } else {
            second_n += i;
            second_c++;
        }
    }
    double first_ave = first_n / first_c;
    double second_ave = second_n / second_c;
    cout << fixed << setprecision(1);
    cout << first_ave << " " << second_ave << endl;
    return 0;
}
