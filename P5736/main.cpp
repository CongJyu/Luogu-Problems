// luogu p5736

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    if (x == 2) {
        return true;
    } else if (x < 2) {
        return false;
    } else {
        bool prime = true;
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x % i == 0) {
                prime = false;
            }
        }
        if (prime) {
            return true;
        } else {
            return false;
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    int n = 0;
    cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    for (int i = 0; i < n; ++i) {
        if (is_prime(a[i])) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
    delete[] a;
    return 0;
}
