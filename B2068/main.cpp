// luogu b2068

#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int counter{};
    while (n--) {
        char a{}, b{}, c{}, d{};
        cin >> a >> b >> c >> d;
        if ((d - '0') - (c - '0') - (b - '0') - (a - '0') > 0) {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
