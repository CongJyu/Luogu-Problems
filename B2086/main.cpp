// luogu b2086

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{}, c{};
    cin >> a >> b >> c;
    int count{};
    for (int i{-c}; i <= c; ++i) {
        for (int j{-c}; j <= c; ++j) {
            if (a * i + b * j == c and i >= 0 and j >= 0) {
                count++;
            }
        }
    }
    cout << count << endl;
    return 0;
}
