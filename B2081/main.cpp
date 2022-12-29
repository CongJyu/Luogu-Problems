// luogu b2081

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    int n{};
    cin >> n;
    int result{};
    for (int i{1}; i <= n; ++i) {
        if (i % 7 != 0 and to_string(i).find('7') == string::npos) {
            result += i * i;
        }
    }
    cout << result << endl;
    return 0;
}
