// luogu b2110

#include <iostream>
#include <string>

using namespace std;

char letter[26]{};

int main() {
    ios::sync_with_stdio(false);
    string s;
    cin >> s;
    for (int i{}; i < s.length(); ++i) {
        letter[s[i] - 'a']++;
    }
    char probe{'-'};
    for (int i{}; i < s.length(); ++i) {
        if (letter[s[i] - 'a'] == 1) {
            probe = s[i];
            break;
        }
    }
    if (probe != '-') {
        cout << probe << endl;
    } else {
        cout << "no" << endl;
    }
    return 0;
}
