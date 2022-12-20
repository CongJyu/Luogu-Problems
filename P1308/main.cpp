// luogu p1308

#include <iostream>
#include <string>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    string target;
    cin >> target;
    for (char &i: target) {
        if (i >= 'A' && i <= 'Z') {
            i = (char) (i + 'A' - 'a');
        }
    }
    string sentence;
    getline(cin, sentence);
    for (char &i: sentence) {
        if (i >= 'A' && i <= 'Z') {
            i = (char) (i + 'A' - 'a');
        }
    }
    // no idea
    return 0;
}
