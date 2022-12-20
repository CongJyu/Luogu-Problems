// luogu p1217

#include <iostream>
#include <cmath>
#include <string>
#include <algorithm>

using namespace std;

bool is_palindrome(int x) {
    string sx = to_string(x);
    string rsx = to_string(x);
    reverse(rsx.begin(), rsx.end());
    if (sx == rsx) {
        return true;
    } else {
        return false;
    }
}

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
    int a = 0, b = 0;
    cin >> a >> b;
    for (int j = a; j <= b; ++j) {
        if (is_prime(j) && is_palindrome(j)) {
            cout << j << endl;
        }
    }
    return 0;
}
