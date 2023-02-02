// luogu b2113

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string original;
    cin >> original;
    for (int i{1}; i <= original.length(); ++i) {
        cout << (char) (original[i - 1] + original[i % original.length()]);
    }
    cout << endl;
    return 0;
}
