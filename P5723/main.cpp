// luogu p5723

#include <iostream>
#include <cmath>

using namespace std;

bool is_prime(int x) {
    if (x == 2) {
        return true;
    } else if (x < 2) {
        return false;
    } else {
        for (int i = 2; i <= sqrt(x); ++i) {
            if (x % i == 0) {
                return false;
            }
        }
        return true;
    }
}

int main() {
    ios::sync_with_stdio(false);
    int l = 0;
    cin >> l;
    int sum = 0;
    int test = 0, cnt = 0;
    while (sum < l) {
        test++;
        if (is_prime(test)) {
            sum += test;
            if (sum > l) {
                break;
            } else {
                cout << test << endl;
                cnt++;
            }
        }
    }
    cout << cnt << endl;
    return 0;
}
