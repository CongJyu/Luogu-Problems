// luogu b2082

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int l{}, r{};
    cin >> l >> r;
    int counter{};
    for (int i{l}; i <= r; ++i) {
        string check{to_string(i)};
        for (int j{}; j < (int) check.length(); ++j) {
            if (check[j] == '2') {
                counter++;
            }
        }
    }
    cout << counter << endl;
    return 0;
}
