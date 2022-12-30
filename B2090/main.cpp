// luogu b2090

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int *age{new int[n]};
    int a{}, b{}, c{}, d{};
    for (int i{}; i < n; ++i) {
        cin >> age[i];
        if (age[i] <= 18) {
            a++;
        } else if (age[i] >= 19 and age[i] <= 35) {
            b++;
        } else if (age[i] >= 36 and age[i] <= 60) {
            c++;
        } else if (age[i] >= 61) {
            d++;
        }
    }
    cout << fixed << setprecision(2);
    cout << a * 100.0 / n << "%" << endl;
    cout << b * 100.0 / n << "%" << endl;
    cout << c * 100.0 / n << "%" << endl;
    cout << d * 100.0 / n << "%" << endl;
    delete[] age;
    return 0;
}
