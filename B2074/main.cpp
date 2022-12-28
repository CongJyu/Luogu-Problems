// luogu b2074

#include <iostream>
#include <string>

using namespace std;

string day[7] = {
        "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"
};

int main() {
    ios::sync_with_stdio(false);
    int a{}, b{};
    cin >> a >> b;
    int result{1};
    for (int i{}; i < b; ++i) {
        result *= a;
        result %= 7;
    }
    cout << day[result] << endl;
    return 0;
}
