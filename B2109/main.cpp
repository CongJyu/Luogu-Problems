// luogu b2109

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string s;
    getline(cin, s);
    int counter{};
    for (int i{}; i < s.length(); ++i) {
        if (s[i] >= '0' and s[i] <= '9') {
            counter++;
        }
    }
    cout << counter << endl;
    return 0;
}
