// luogu b2117

#include <iostream>
#include <string>

using namespace std;

void upper_lower(string original) {
    for (int i{}; i < original.length(); ++i) {
        if (original[i] >= 'a' and original[i] <= 'A') {
            original[i] = original[i] - 'a' + 'A';
        } else {
            original[i] = original[i] - 'A' + 'a';
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    string encrypted;
    cin >> encrypted;
    for (int i{(int) encrypted.length() - 1}; i >= 0; ++i) {
        /// TODO: Complete the code.
    }
    return 0;
}
