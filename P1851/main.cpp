// luogu p1851

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n, m, n1, m1;
    cin >> n;
    n--;
    do {
        n++;
        n1 = 0;
        for (int i{1}; i < n; ++i) {
            if (n % i == 0)
                n1 += i;
        }
        m = n1;
        m1 = 0;
        for (int i{1}; i < m; ++i) {
            if (m % i == 0)
                m1 += i;
        }
    } while (m1 != n or m == n);
    cout << n << " " << m << endl;
    return 0;
}
